#include <iostream>
#include <iomanip>
#include <stdexcept>

#include "Array.h"
using namespace std;

// Arguments: integer which is the size of the arayy. Member
// Purpose: Initalize size of array if it is greater than 0. Return value: None
Array::Array(int arraySize) {
    if (arraySize > 0){
        size = static_cast<size_t>(arraySize);
    }
    else {
        std::cout << "Array size must be greater than 0"
                  << std::endl;
    }

    ptr = new int[size]{};
}

// Arguments: Array object. Takes in an array and copies it. Member
// Return Value: None
Array::Array(const Array& arrayToCopy) {
    size = arrayToCopy.size;
    ptr = new int[size];
    for (size_t i {0}; i < size; ++i) {
        ptr[i] = arrayToCopy.ptr[i];
    }
}

//  Arguments: None. Member
// Purpose: Deallocate memory for array. Return Value: None
Array::~Array() {
    delete[] ptr;
}

//  Arguments: None. Member
//  Purpose: Return size of array. Return Value: size_t
size_t Array::getSize() const {
    return size;
}

//  Arguments: Array object. Member. 
//  Purpose: Assigns the right array to the left array. Return Value: The new array
const Array& Array::operator=(const Array& right) {
    //
    if (&right != this) { 
        //  If the size of the array is not equal to the right array size, then delete the array and create a new one.
        //  Then copy the values of the right array to the left array.
        if (size != right.size) {
            delete[] ptr;
            size = right.size;
            ptr = new int[size];
        }
        //  Copy the values of the right array to the left array.
        //  Return the left array.
        for (size_t i{0}; i < size; ++i) {
            ptr[i] = right.ptr[i];
        }
    }
    return *this;
}

// Arguements: Constant array object. Member that compares two arrays to see if they are equal.
//  Return Value: Boolean
bool Array::operator==(const Array& right) const {
    if (size != right.size) {
        return false;
    }
    for (size_t i{0}; i < size; ++i) {
        if (ptr[i] != right.ptr[i]) {
            return false;
        }
    }
    return true;
}


//  Arguments: Constant array object. Member that compares two arrays to see if they are not equal.
//  Return Value: Boolean
bool Array::operator!=(const Array& right) const {
    return !(*this == right);
}

//  Arguments: An integer. Member that returns the value of the array at the index of the integer.
//  Return Value: Integer
int& Array::operator[](int subscript) {
    //  If the subscript is less than 0 or greater than the size of the array, then throw an out of range exception.
    if (subscript < 0 || subscript >= size) {
        throw out_of_range{"Subscript out of range"};
    }
    return ptr[subscript];
}

// Arguments: An integer. Member that returns the value of the array at the index of the integer.
//  Return Value: Integer
int Array::operator[](int subscript) const {
    //  If the subscript is less than 0 or greater than the size of the array, then throw an out of range exception.
    //  Return the value of the array at the index of the integer.
    if (subscript < 0 || subscript >= size) {
        throw out_of_range{"Subscript out of range"};
    }
    return ptr[subscript];
}

// Arguments: istream object and Array object. Friend function that takes in an array and assigns values to it.
//  Return Value: istream
istream& operator>>(istream& input, Array& a) {
    for (size_t i{0}; i < a.size; ++i) {
        input >> a.ptr[i];
    }
    return input; 
}

//  Arguments: ostream object and Array object. Friend function that takes in an array and prints out the values.
//  Return Value: ostream
ostream& operator<<(ostream& output, const Array& a) { 
    for (size_t i{0}; i < a.size; ++i) {
        output << a.ptr[i] << "  ";
    }
    output << endl;
    return output; 
}
