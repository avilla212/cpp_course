#include "student.h"

int main() {
    std::string inputFileName, outputFileName;
    std::cout << "Enter input file name: ";
    std::cin >> inputFileName;
    
    std::ifstream testInput(inputFileName);
    if (!testInput.good()) {
        std::cout << "Error: Input file does not exist.\n";
        return 1;
    }
    testInput.close();

    std::cout << "Enter output file name: ";
    std::cin >> outputFileName;

    std::ifstream testOutput(outputFileName);
    if (testOutput.good()) {
        std::cout << "Error: Output file already exists.\n";
        return 1;
    }
    testOutput.close();

    processStudents(inputFileName, outputFileName);
    return 0;
}

