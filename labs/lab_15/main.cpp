#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>

using namespace std;

int main() {
    ofstream outFile("inventory.txt", ios::out);

    if (!outFile) {
        cerr << "Error opening file" << endl;
        exit(EXIT_FAILURE);
    }

    int serialNum;
    string partName;
    int quantity;

    cout << "Enter serial number, part name, and quantity: \n"
         << "Enter eof to end input\n";

    while (cin >> serialNum >> partName >> quantity) {
        outFile << serialNum << " " << partName << " " << quantity << endl;
    }

    outFile.close();

    ifstream inFile("inventory.txt", ios::in);

    if (!inFile) {
        cerr << "Error opening file" << endl;
        exit(EXIT_FAILURE);
    }

    cout << left << setw(15) << "Serial Number" << setw(20) << "Part Name" << setw(10) << "Quantity" << endl;

    while (inFile >> serialNum >> partName >> quantity) {
        cout << left << setw(15) << serialNum << setw(20) << partName << setw(10) << quantity << endl;
    }

    inFile.close();

    return 0;
}
