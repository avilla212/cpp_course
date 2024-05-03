#ifndef ASCI_HPP
#define ASCI_HPP

#include <iostream>
#include <iomanip>

using std::endl;
using std::cout;

// User defined manipulator that inserts two tabs
std::ostream& doubletab(std::ostream& COUT) {
    return COUT << "\t\t";
}

// Print ASCII
void printASCII() {
    cout << "Decimal" << doubletab << "Octal" << doubletab << "Hexadecimal\t" << "Character" << endl;

    for (int i = 33; i <= 70; i++){
        
        cout << std::showbase;
        cout << std::dec << i << doubletab;
        cout << std::oct << i << doubletab;
        cout << std::hex << i << doubletab;
        cout << static_cast<char>(i) << endl;
    }
}

#endif