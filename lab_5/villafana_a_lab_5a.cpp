#include <iomanip>
#include <iostream>

// function prototypes
void getUsrInput(double &pounds, double &ounces);
void convertToMetric(double pounds, double ounces, double &kilograms, double &grams);
void displayOutput(double pounds, double ounces, double kilograms, double grams);

int main()
{
    /*
        Write a program that will asks the user for the weight of an item in pounds 
        and ounces and outputs the equivalent weight in kilograms and grams.
    */

   // create all variables in main and then use pass by reference with our functions
   
    double pounds = 0;
    double ounces = 0;
    double kilograms = 0;
    double grams = 0;

    std::cout << "Pounds before function call: " << pounds << "\n";
    std::cout << "Ounces before function call: " << ounces << "\n";
    std::cout << "Kilograms before function call: " << kilograms << "\n";
    std::cout << "Grams before function call: " << grams << "\n";

    getUsrInput(pounds, ounces);
    convertToMetric(pounds, ounces, kilograms, grams);
    displayOutput(pounds, ounces, kilograms, grams);

    std::cout << "Pounds after function call: " << pounds << "\n";
    std::cout << "Ounces after function call: " << ounces << "\n";
    std::cout << "Kilograms after function call: " << kilograms << "\n";
    std::cout << "Grams after function call: " << grams << "\n";

    return 0;
}

void getUsrInput(double &pounds, double &ounces)
{
    std::cout << "Enter the weight of the item in pounds: ";
    std::cin >> pounds;

    std::cout << "Enter the weight of the item in ounces: ";
    std::cin >> ounces;

    return;
}

void convertToMetric(double pounds, double ounces, double &kilograms, double &grams)
{
    // 1 pound = 0.453592 kilograms
    // 1 ounce = 0.0283495 kilograms
    // 1 kilogram = 1000 grams

    kilograms = pounds * 0.453592 + ounces * 0.0283495;
    grams = kilograms * 1000;

    return;
}

void displayOutput(double pounds, double ounces, double kilograms, double grams)
{
    std::cout << std::fixed << std::setprecision(2);
    std::cout << "Weight in kilograms: " << kilograms << " kg\n";
    std::cout << "Weight in grams: " << grams << " g\n";

    return;
}