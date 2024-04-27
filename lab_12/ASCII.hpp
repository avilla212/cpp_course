#ifndef ASCII_HPP
#define ASCII_HPP

#include <iostream>
#include <iomanip>

using std::cout;

// Create a user defined stream manipulator called doubletab that 
// inserts two tabs and use it to display the ASCII table
std::ostream& doubletab(std::ostream& out){
    out << "\t\t";
    return out;
}

// print ascii table from 32 to 77 and use doubletab to format the output
void printASCII(){
    cout << "ASCII Table" << std::endl;
    cout << "Dec\tHex\tOct\tChar" << std::endl;
    cout << "------------------------" << std::endl;
    for (int i = 33; i <= 77; i++){
        // Decimal = 33 Octal = 041 Hexa = 0x21 Character = !
        cout << std::dec << i << doubletab << std::hex << i << doubletab << std::oct << i << doubletab << static_cast<char>(i) << std::endl;
    }
}

#endif