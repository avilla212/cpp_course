#include <iostream>

using namespace std;

// Function to calculate power
double calculatePower(double base, int exponent) {
    double result = 1.0;
    for (int i = 0; i < exponent; ++i) {
        result *= base;
    }
    return result;
}

int main() {
    double base;
    int exponent;

    // Loop until the user enters 0 for the base
    while (true) {
        cout << "Enter the base (or 0 to exit): ";
        cin >> base;

        // Check for sentinel value
        if (base == 0) {
            cout << "Exiting program." << endl;
            break;
        }

        cout << "Enter a positive exponent: ";
        cin >> exponent;

        // Since we assume exponent is always positive, no need to check for negative values
        double power = calculatePower(base, exponent);
        cout << base << " raised to the power of " << exponent << " is: " << power << endl;
    }

    return 0;
}
