#include "Print.h"
#include "WriteInFile.h"
#include <iostream>
#include <cstring>

int main(int argc, char* argv[]) {
    Print printer;
    WriteInFile writer;

    if (argc == 2 && std::strcmp(argv[1], "-c") == 0) {
        printer.printHelloWorld();
    } else if (argc == 2 && std::strcmp(argv[1], "-f") == 0) {
        writer.writeHello();
    } else {
        std::cerr << "Usage: program [-c|-f]\n";
        return 1;
    }

    return 0;
}
