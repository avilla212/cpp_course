#include <iostream>
#include <iomanip>

using namespace std;

void residentialMenu();
void businessMenu();

int main(){

    bool residential = false;
    bool business = false;
    
    residentialMenu();
    businessMenu();

    return 0;
}

void residentialMenu(){
    cout << "For residential customers, these are the rates: \n";

    cout << setw(5) << "1. Bill Processing fee (flat rate): $4.50\n";
    cout << setw(5) << "2. Internet connectivity (flat rate): $70.99\n";
    cout << setw(5) << "3. Premium cable channels (flat rate): $7.50\n";
    cout << endl;
}   

void businessMenu(){
    cout << "For business customers, these are the rates: \n";

    cout << setw(5) << "1. Bill Processing fee (flat rate): $15.00\n";
    cout << setw(5) << "2. Internet connectivity, pre-paid data: $75.00 for up to 10TB of data, $5.00 for each additional 1TB over 10\n";
    cout << setw(5) << "3. Premium cable channels (flat rate): $10.00 per channel\n";
    cout << endl;
}

// User input grabs int: account number, char: customer code, int: num of premium channels
// For business customers, how much pre paid data in TB (int)

// Function for residential customers input


// Function for business customers input