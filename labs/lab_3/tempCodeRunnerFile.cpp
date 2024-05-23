bool isValid = true;

    while (isValid)
    {
        
        // Check if the first digit is 1
        if (binaryNumber < 10000)
        {
            std::cout << "Error: The first digit must be 1" << std::endl;
            std::cout << "Enter a 5 digit binary number: ";
            std::cin >> binaryNumber;
            continue;
        }

        // Check if the input is 5 digits
        for (int i = 0; i < 5; i++)
        {
            if (binaryNumber < 10000 || binaryNumber > 11111)
            {
                std::cout << "Error: The input must be 5 digits" << std::endl;
                std::cout << "Enter a 5 digit binary number: ";
                std::cin >> binaryNumber;
                break;
            }
        }

        // Check if the input is only 0s and 1s
        for (int i = 0; i < 5; i++)
        {
            if (binaryNumber % 10 != 0 && binaryNumber % 10 != 1)
            {
                std::cout << "Error: The input must be only 0s and 1s" << std::endl;
                std::cout << "Enter a 5 digit binary number: ";
                std::cin >> binaryNumber;
                break;
            }
        }

        // If the input is valid, exit the loop
        isValid = false;

    }

    // Convert the binary number to decimal
    for (int i = 0; i < 5; i++)
    {
        decimalNumber += (binaryNumber % 10) * pow(2, i);
        binaryNumber /= 10;
    }

    std::cout << "The binary number " << bi