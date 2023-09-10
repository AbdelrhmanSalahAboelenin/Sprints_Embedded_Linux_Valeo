#include <iostream>
#include <string>
#include <cstdlib> 
#include <unistd.h>
#include "../IPC_library/IPC_library.cpp"


// Function prototypes
int add(int a, int b);
int subtract(int a, int b);
int multiply(int a, int b);
double divide(int a, int b);


int main(int argc, char* argv[]) {

    if (argc != 4) {
    //help manual to be printed if the user misuses the application or requests the manual using --help
    std::cout << "Usage: Math_Application <operand1> <operation> <operand2>\n";
    std::cout << "Available operations:\n";
    std::cout << "  <operand1> add <operand2>\n";
    std::cout << "  <operand1> subtract <operand2>\n";
    std::cout << "  <operand1> multiply <operand2>\n";
    std::cout << "  <operand1> divide <operand2>\n";
    std::cout << "Options:\n";
    std::cout << "  --help: Show this help message\n";
        return 1;
    }

    IPC_library sender("MathApplication", 13); // Connect to the existing queue

    // Send a log message from Math_Apllication to the Daemon Logger
    std::string message = "Hello Abdelrhman from Math_Application!";

    int num1 = std::atoi(argv[1]);
    char operation = argv[2][0]; 
    int num2 = std::atoi(argv[3]);

std::string log_Message1 = "MathApplication logs are : ";
        sender.Send_Message(log_Message1);
    int result = 0;
    switch (operation) {
        case '+':
          { result = add(num1 , num2);
            std::string log_Message2 = "ADD operation " ;
            sender.Send_Message(log_Message2);}
            break;
        case '-':
            {result = subtract(num1 , num2);
            std::string log_Message2 = "SUBTRACT operation " ;
            sender.Send_Message(log_Message2);}
            break;
        case 'x':
            {result = multiply(num1 , num2);
             std::string log_Message2 = "MULTIPLY operation " ;
            sender.Send_Message(log_Message2);}
            break;
        case '/':
          { result = divide(num1 , num2);
            std::string log_Message2 = "DIVIDE operation " ;
            sender.Send_Message(log_Message2);}
            break;
        default:
            std::cerr << "Invalid operator: " << operation << std::endl;
            return 1;
    }
    // Display the result
    std::cout << "the Result is : \n" << result << std::endl;

        std::string log_Message3 = "the input numbers are : " + std::to_string(num1) + " and " + std::to_string(num2);
        sender.Send_Message(log_Message3);

        std::string log_Message4 = "the result is : " + std::to_string(result)+"\n";
        sender.Send_Message(log_Message4);
        
        std::cout << "MathApplication: Done, the Messages sent to Daemon Logger." << std::endl;

    return 0;
}
// addition function
int add(int a, int b) {
    return a + b;
}

// subtraction function
int subtract(int a, int b) {
    return a - b;
}

// multiplication function
int multiply(int a, int b) {
    return a * b;
}

// division function
double divide(int a, int b) {
    if (b == 0) {
        std::cerr << "Error: Division by zero!" << std::endl;
        return 0.0;
    }
    return static_cast<double>(a) / b;
}
