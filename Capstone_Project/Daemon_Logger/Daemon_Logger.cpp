#include <iostream>
#include <string.h>
#include <string>
#include "../IPC_library/IPC_library.cpp" 
#include <unistd.h> 
#include <boost/log/trivial.hpp>
#include <boost/log/utility/setup/file.hpp>
#include <boost/log/utility/setup/common_attributes.hpp>
#include <boost/log/expressions.hpp>
#include <boost/log/support/date_time.hpp>
#include <boost/asio.hpp> 

#define PORT "55555"
#define IP "192.168.1.17" //laptop ip address 192.168.1.17

// Initialize Boost Log for logging
void initLogger() {
    // Initialize Boost Log for logging
    boost::log::register_simple_formatter_factory<boost::log::trivial::severity_level, char>("Severity");
    boost::log::register_simple_formatter_factory<boost::log::trivial::severity_level, char>("LineID");
    
    boost::log::add_file_log( 
    boost::log::keywords::file_name = "my_project_logs.log",
    boost::log::keywords::auto_flush = true,
    boost::log::keywords::open_mode = std::ios_base::app 
    );

    // Define the log format including a timestamp
    boost::log::add_common_attributes();
    boost::log::core::get()->set_filter(boost::log::trivial::severity >= boost::log::trivial::info);       
}

int main() {
    // Initialize the logger
    initLogger();

    BOOST_LOG_TRIVIAL(info) << "Daemon_logger: This is an info message";

    // Initialize the IPC library for receiving log messages from Math_Application
    IPC_library receiver("Program_File", 13)    ;

    std::string receivedMessage; // Log received from the Math Application and will be send to Logger receiver app
    
    // IP & port
	auto const address = boost::asio::ip::make_address(IP);
	auto const port = std::atoi(PORT);

	boost::asio::io_service io_service;

	// Create socket
	boost::asio::ip::tcp::socket socket(io_service);

	//Connection
	boost::system::error_code EC;
 	socket.connect( boost::asio::ip::tcp::endpoint( address, port ),EC);
	if(EC){std::cout<<EC.message()<<std::endl; return 1;}

    
    while (1) {
        // Receive log messages from Math_Application using IPC library
        if (receiver.Receive_Message(receivedMessage)) {

            std::cout << "Daemon Logger: Received log message from the Math_Application: " << receivedMessage << std::endl;
            receivedMessage = receivedMessage + '\n';
            // Log the received message
            BOOST_LOG_TRIVIAL(info) << receivedMessage ;
            
            // Send the received log message to the remote logger server
            boost::system::error_code Error;
            boost::asio::write( socket, boost::asio::buffer(receivedMessage), Error );
            if(Error){std::cout << "send failed: " << Error.message() << std::endl;}           
            }

        else {
            std::cerr << "Error receiving log message." << std::endl;
        }


        sleep(1); // Sleep for 1 seconds
    }

    return 0;
}
