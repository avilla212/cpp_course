// use villafana_a_lab_7a namespace
#include "MyInteger.h"

#include <iostream>
#include <iomanip>

using std::cout;
using std::endl;

void space();

int main(){

    MyInteger myInt1;
    MyInteger myInt2;

    cout << "Alexander Villafana" << endl;

    // Set the value of the integers
    cout << "Setting number1 to 5" << endl;
    myInt1.set(5);

    cout << "Setting number2 to 10" << endl;
    myInt2.set(10);
    space();

    // Get the value of the integers
    cout << "Getting number1: " << myInt1.get() << endl;
    cout << "Getting number2: " << myInt2.get() << endl;
    space();

    // Add, subtract, multiply, and compare the integers
    cout << "Adding number1 to number2" << endl;
    myInt1.add(myInt2.get());
    cout << "After adding number1 to number2, number1 is now: " << myInt1.get() << endl;
    space();

    // Subtract, multiply, and compare the integers
    cout << "Subtracting number2 from number1" << endl;
    myInt1.subtract(myInt2.get());
    cout << "After subtracting number2 from number1, number1 is now: " << myInt1.get() << endl;
    space();

    // Multiply, and compare the integers
    cout << "Multiplying number1 by number2" << endl;
    myInt1.multiply(myInt2.get());
    cout << "After multiplying number1 by number2, number1 is now: " << myInt1.get() << endl;
    space();

    // Compare the integers
    cout << "Comparing number1 to number2" << endl;
    cout << "The result of comparing number1 to number2 is: " << myInt1.compare(myInt2) << endl;
    space();

    return 0;
}

// Just a function to print a space
void space(){
    cout << endl;
}
