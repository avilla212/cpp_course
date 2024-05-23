// Pointer practice 
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{

    long value1 {200000};
    long value2 {0};

    // A. Declare the variable longPtr to be a pointer to a var type long
    long* longPtr;

    // B. Assign the address of variable value1 to pointer var longPtr
    longPtr = {&value1};
   
    // C. Display the value of the var pointed to by longPtr
    cout << "Value of var pointed to by longPtr " << *longPtr << endl;

    // D. Assign to value2 the value of the variable pointed to by longPtr
    value2 = *longPtr;

    // E. Display the value of value2
    cout << "Value of value2 after step D = " << value2 << endl;

    // F. Display the address of value1 
    cout << "Display the address of value 1: " << &value1 << endl;

    // G. Display the address stored in longPtr
    cout << "Display the address stored in longPtr: " << longPtr << endl;

    return 0;
}