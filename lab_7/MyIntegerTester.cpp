#include "MyInteger.h"
#include <iostream>

using namespace std;

int main(){

    // Create two MyInteger objects
    MyInteger myInt1(5);
    MyInteger myInt2(10);

    cout << "Initial values: " << myInt1 << " and " << myInt2 << endl;

    // Use binary operators
    cout << "Using Binary Operators:\n";
    cout << "myInt1 + myInt2 = " << myInt1 + myInt2 << endl;
    cout << "myInt1 - myInt2 = " << myInt1 - myInt2 << endl;
    cout << "myInt1 < myInt2? " << (myInt1 < myInt2 ? "Yes" : "No") << endl;
    cout << "myInt1 > myInt2? " << (myInt1 > myInt2 ? "Yes" : "No") << endl;

    myInt1 += myInt2;
    cout << "\nAfter myInt1 += myInt2, myInt1 = " << myInt1 << endl;

    myInt1 -= myInt2;
    cout << "After myInt1 -= myInt2, myInt1 = " << myInt1 << endl;

    return 0;

}