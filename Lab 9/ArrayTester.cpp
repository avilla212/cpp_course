// Array class test program.
#include <iostream>
#include <stdexcept>
#include "Array.h"
using namespace std;

int main() {
    Array integers1 {3}; // 3-element Array   
    Array integers2;     // 5-element Array by default

    // print integers1 size and contents
    cout << "\nSize of Array integers1 is " << integers1.getSize()
        << "\nArray after initialization: " << integers1 << endl;

    // print integers2 size and contents
    cout << "\nSize of Array integers2 is " << integers2.getSize()
        << "\nArray after initialization: " << integers2 << endl;

    // input and print integers1 and integers2
    cout << "\nEnter 8 integers, separated by spaces:" << endl;
    cin >> integers1 >> integers2;

    cout << "\nAfter input, the Arrays contain:\n"
        << "integers1: " << integers1
        << "integers2: " << integers2;

    // use overloaded inequality (!=) operator
    cout << "\n---Evaluating: integers1 != integers2" << endl;

    if (integers1 != integers2) {
        cout << "integers1 and integers2 are not equal" << endl;
    }

    // create Array integers3 using integers1 as an initializer         
    // print size and contents                  
    cout << "\n---Create integers3, initializing with integers1" << endl;
    Array integers3 {integers1}; // invokes copy constructor

    cout << "Size of Array integers3 is " << integers3.getSize()
        << "\nArray after initialization: " << integers3;

    // use overloaded assignment (=) operator
    cout << "\n---Assigning integers2 to integers1:" << endl;
    integers1 = integers2; // note target Array is smaller

    cout << "integers1: " << integers1 << "integers2: " << integers2;

    // use overloaded equality (==) operator
    cout << "\n---Evaluating: integers1 == integers2" << endl;

    if (integers1 == integers2) {
        cout << "integers1 and integers2 are equal" << endl;
    }

    // use overloaded subscript operator to create rvalue
    cout << "\n---Testing subscript operator[]" << endl;
    cout << "integers1[2] is " << integers1[2] << endl;

    // use overloaded subscript operator to create lvalue
    cout << "\n---Assigning 1000 to integers1[2]" << endl;
    integers1[2] = 1000;
    cout << "integers1: " << integers1;

    // attempt to use out-of-range subscript
    cout << "\n---Attempt to assign 1000 to integers1[15]" << endl << endl;
    integers1[15] = 1000; // ERROR: subscript out of range

    cout << endl;
}
