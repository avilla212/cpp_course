#include <iostream>
#include <iomanip>
using namespace std;

// Function prototypes
void getUserInput(double &pounds, double &ounces);
void convertToKilogramsAndGrams(double pounds, double ounces, double &kilograms, double &grams);
void outputResult(double kilograms, double grams);

int main() {
    double pounds, ounces;    // Variables for input
    double kilograms, grams;  // Variables for output
    char continueInput;       // Variable to control the loop


    do {
        getUserInput(pounds, ounces);    // Call function to get user input
        convertToKilogramsAndGrams(pounds, ounces, kilograms, grams);  // Convert to kg and g
        outputResult(kilograms, grams);  // Display the result

        // Ask user if they want to convert another weight
        cout << "\nContinue? Enter \"y\" or \"n\" to continue: ";
        cin >> continueInput;
    } while (continueInput == 'Y' || continueInput == 'y');

    return 0;
}

// Function to gather user input
void getUserInput(double &pounds, double &ounces) {
    cout << "Let's convert pounds and ounces to kilograms and grams." << endl;
    cout << "Enter pounds: ";
    cin >> pounds;
    cout << "Enter ounces: ";
    cin >> ounces;
}

// Function to calculate the conversion
void convertToKilogramsAndGrams(double pounds, double ounces, double &kilograms, double &grams) {
    const double poundsToKilograms = 0.453592;
    const double ouncesToKilograms = 0.0283495;
    // First convert pounds and ounces to kilograms
    kilograms = pounds * poundsToKilograms + ounces * ouncesToKilograms;
    // Then convert kilograms to grams for the grams part
    grams = (kilograms - static_cast<int>(kilograms)) * 1000;
    kilograms = static_cast<int>(kilograms);  
}

// Function to output the result
void outputResult(double kilograms, double grams) {

    cout << "\nWeight converted to kilograms and grams:" << endl;
    
    // move output to the right
    cout << "Kilograms: " << kilograms << "kg" << endl;
    cout << setprecision(2) << fixed;
    cout << "Grams: " << setw(10) << grams << 'g' << endl;
}
