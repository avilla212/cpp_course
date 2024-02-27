#include <iostream>

using namespace std;

// Define your own value for pi
const double PI = 3.14;

// Function to calculate the area of a circle
double calculateCircleArea(double diameter) {
    double radius = diameter / 2.0;
    return PI * radius * radius;
}

// Function to calculate the area of a rectangle
double calculateRectangleArea(double length, double width) {
    return length * width;
}

int main() {
    double diameter, length, width;
    int choice;

    do {
        // Prompt user for circle diameter and rectangle dimensions
        cout << "Enter the diameter of the circle: ";
        cin >> diameter;
        cout << "Enter the length of the rectangle: ";
        cin >> length;
        cout << "Enter the width of the rectangle: ";
        cin >> width;

        // Calculate areas
        double circleArea = calculateCircleArea(diameter);
        double rectangleArea = calculateRectangleArea(length, width);

        // Display results
        cout << "The circle with diameter " << diameter << " has an area of " << circleArea << endl;
        cout << "The rectangle with a length of " << length << " and a width of " << width << " has an area of " << rectangleArea << endl;

        // Compare areas and display comparison
        if (circleArea > rectangleArea) {
            cout << "The circle's area is " << circleArea / rectangleArea << " times the area of rectangle" << endl;
        } else {
            cout << "The rectangle's area is " << rectangleArea / circleArea << " times the area of circle" << endl;
        }

        // Ask user if they want to run the process again
        cout << "Do you want to run the process again? Enter 1 to run again or 0 to exit: ";
        cin >> choice;

    } while (choice != 0);

    cout << "GOODBYE" << endl;

    return 0;
}
