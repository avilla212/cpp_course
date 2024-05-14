#include <iostream>

int main(){
    // Part 1
    std::cout << "-----Part 1-----\n";
    
    std::cout << "Alex's table\n";
    std::cout << "integer\tsquare\tcube" << std::endl;

    for (int i = 1; i <= 10; i++){
        std::cout << i << "\t" << i * i << "\t" << i * i * i << std::endl;
    }

    // Part 2
    std::cout << "\n-----Part 2-----\n";
    std::cout << "A - " << static_cast<int>('A') << "\n";
    std::cout << "l - " << static_cast<int>('l') << "\n";
    std::cout << "e - " << static_cast<int>('e') << "\n";
    std::cout << "x - " << static_cast<int>('x') << std::endl;
    
    // Part 3
    std::cout << "\n-----Part 4-----\n";
    float num1 = 0.0;
    float num2 = 0.0;
    float num3 = 0.0;
    float num4 = 0.0;

    std::cout << "Number calculator by Mr. Villafana\n";
    
    std::cout << "Enter the first of four different numbers: ";
    std::cin >> num1;

    float smallest = num1;
    float largest = num1;

    std::cout << "Enter the second of four different numbers: ";
    std::cin >> num2;

    if (num2 < smallest){
        smallest = num2;
    }
    if (num2 > largest){
        largest = num2;
    }

    std::cout << "Enter the third of four different numbers: ";
    std::cin >> num3;

    if (num3 < smallest){
        smallest = num3;
    }
    if (num3 > largest){
        largest = num3;
    }

    std::cout << "Enter the fourth of four different numbers: ";
    std::cin >> num4;

    if (num4 < smallest){
        smallest = num4;
    }
    if (num4 > largest){
        largest = num4;
    }

    std::cout << "The sum of your numbers is " << num1 + num2 + num3 + num4 << std::endl;
    std::cout << "The average of your numbers is " << (num1 + num2 + num3 + num4) / 4 << std::endl;
    std::cout << "The product of your numbers is " << num1 * num2 * num3 * num4 << std::endl;
    std::cout << "The smallest numbers is " << smallest << std::endl;
    std::cout << "The largest is " << largest << std::endl;
    
    return 0;
}