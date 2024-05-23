
#include <iostream>

int main(){

    std::cout << "---Part 1---------" << std::endl;

    std::cout << "    *\n"
                 "   ***\n"
                 "  *****\n"
                 << std::endl;

    std::cout << "---Part 2---------" << std::endl;

    int num1 = 17 / 5;
    int num2 = 17 % 5;

    std::cout << "17 / 5 is " << num1 << " remainder " << num2 << std::endl;
    std::cout << "\n";

    std::cout << "---Part 3---------" << std::endl;

    float pi = 3.14;
    float radius, diameter, circumference, area;

    std::cout << "Enter the radius of a circle: ";
    std::cin >> radius;

    diameter = radius * 2;
    circumference = 2 * pi * radius;
    area = pi * radius * radius;

    std::cout << std::endl;
    std::cout << "Radius is " << radius << std::endl;
    std::cout << "Diameter is " << diameter << std::endl;
    std::cout << "Circumference is " << circumference << std::endl;
    std::cout << "Area is " << area << std::endl;

    return 0;
}