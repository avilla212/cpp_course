#include <iostream>

int main()
{
    // Declare variables
    int binaryInput;
    int binaryToDecimal = 0;
    int base = 0;

    // Sentinel variable
    bool isValid = true;

    // Prompt for user input
    std::cout << "Enter a 5-bit binary number: ";
    std::cin >> binaryInput;


    // Check if first digit is 1, if not, prompt for new input
    while (isValid)
    {
        // Check if first digit is 1
        if (binaryInput < 10000 || binaryInput > 11111)
        {
            std::cout << "Error: First digit must be 1. Enter new input: ";
            std::cin >> binaryInput;
            std::cout << std::endl;
        }

        // Check if input is 5 digits long
        if (binaryInput < 10000 || binaryInput > 11111)
        {
            std::cout << "Error: Input must be 5 digits long. Enter new input: ";
            std::cin >> binaryInput;
            std::cout << std::endl;
        }

        // Checking if all 0's and 1's
        if (binaryInput < 10000 || binaryInput > 11111)
        {
            std::cout << "Error: Input must be 5 digits long. Enter new input: ";
            std::cin >> binaryInput;
            std::cout << std::endl;
        }
        
        // If input is valid, break out of loop
        else
        {
            isValid = false;
        }

    }

    // Converting our integer binary value to decimal
    for (int i = 0; i ++; i < 5)
    {
        base = binaryInput % 10;
        binaryToDecimal += base * pow(2, i);
        binaryInput /= 10;
    }

    std::cout << "The decimal equivalent of " << binaryInput << " is " << base << std::endl;
    std::cout << "The decimal equivalent of " << binaryInput << " is " << binaryToDecimal << std::endl;

    
    return 0;
}