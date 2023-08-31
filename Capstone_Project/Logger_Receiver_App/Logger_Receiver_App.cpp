#include <iostream>
#include <boost/log/trivial.hpp>
#include <boost/log/utility/setup/file.hpp>
#include <boost/log/utility/setup/common_attributes.hpp>
#include <boost/log/expressions.hpp>
#include <boost/log/support/date_time.hpp>
#include <boost/asio.hpp>

#define PORT "55555"
#define IP "192.168.1.17" //server ip (laptop)

int main() {
    // Log an info message
    BOOST_LOG_TRIVIAL(info) << "Logger_receiver: This is an info message.";

    // Convert the IP address and port to appropriate types
	auto const address = boost::asio::ip::make_address(IP);
	auto const port = std::atoi(PORT);

    // Create an IO service
	boost::asio::io_service io_service;

   // Create an acceptor that listens on the specified IP and port
	boost::system::error_code EC;
	boost::asio::ip::tcp::acceptor acceptor_(io_service, boost::asio::ip::tcp::endpoint(address, port )); 
	boost::asio::ip::tcp::socket socket_(io_service);//socket creation	
	acceptor_.accept(socket_);//waiting for connection

    boost::asio::streambuf buf;

    while (1) {

    // Read data from the connected client
	boost::asio::streambuf buf;
	boost::asio::read_until( socket_, buf, "\n",EC);

    // Check for errors during data reading & print the error
	if(EC){std::cout<<EC.message()<<std::endl; return 1;}

    // Convert the received data to a string and print it
    std::string data = boost::asio::buffer_cast<const char*>(buf.data());
	std::cout << data << std::endl;

    sleep(1); // Sleep for 1 seconds

    }
    return 0;
}

