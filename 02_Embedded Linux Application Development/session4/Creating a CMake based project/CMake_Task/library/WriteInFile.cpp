#include "WriteInFile.h"
#include <fstream>

void WriteInFile::writeHello() {
    std::ofstream outputFile("helloWorld.txt");
    if (outputFile.is_open()) {
        outputFile << "helloWorld!\n";
        outputFile.close();
    }
}
