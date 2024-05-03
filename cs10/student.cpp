#include <iostream>
#include <fstream>
#include <vector>
#include <iomanip>
#include "student.h"

int main() {

    std::string inputFileName, outputFileName;
    std::cout << "Enter input file name: ";

    std::cin >> inputFileName;
    std::ifstream inputFile(inputFileName);

    // .good() returns true if the file exists
    if (!inputFile.good()) {
        std::cout << "Error: Input file does not exist.\n";
        return 1;
    }
    inputFile.close();

    std::cout << "Enter output file name: ";
    std::cin >> outputFileName;

    // ifstream object to check if the output file already exists
    std::ifstream outputFileTest(outputFileName);

    if (outputFileTest.good()) {
        std::cout << "Error: Output file already exists.\n";
        return 1;
    }
    outputFileTest.close();

    processFile(inputFileName, outputFileName);
    
    return 0;
}



