#include <iostream>
#include <iomanip>

using namespace std;

void residentialMenu();
void businessMenu();
void accountInfo(int& accountNumber, char& customerCode, int& premiumChannels, int& prePaidData);
void outputData(int accountNumber, char customerCode, int premiumChannels, int prePaidData);

int main(){

    bool residential = false;
    bool business = false;

    int accountNumber {0};
    char customerCode;
    int premiumChannels {0};
    int prePaidData {0};

    
    residentialMenu();
    businessMenu();
    accountInfo(accountNumber, customerCode, premiumChannels, prePaidData);
    outputData(accountNumber, customerCode, premiumChannels, prePaidData);


    return 0;
}

// Function to display residential menu
void residentialMenu(){
    cout << "For residential customers, these are the rates: \n";

    cout << setw(5) << "1. Bill Processing fee (flat rate): $4.50\n";
    cout << setw(5) << "2. Internet connectivity (flat rate): $70.99\n";
    cout << setw(5) << "3. Premium cable channels (flat rate): $7.50\n";
    cout << endl;
}   

// Function to display business menu
void businessMenu(){
    cout << "For business customers, these are the rates: \n";

    cout << setw(5) << "1. Bill Processing fee (flat rate): $15.00\n";
    cout << setw(5) << "2. Internet connectivity, pre-paid data: $75.00 for up to 10TB of data, $5.00 for each additional 1TB over 10\n";
    cout << setw(5) << "3. Premium cable channels (flat rate): $10.00 per channel\n";
    cout << endl;
}

// Function to grab account number, premium channels and for business customers, how much pre-paid data in TB
void accountInfo(int& accountNumber, char& customerCode, int& premiumChannels, int& prePaidData){
    cout << "Please enter your account number: ";
    cin >> accountNumber;

    cout << "Please enter customer code (R for residential, B for business): ";
    cin >> customerCode;

    if (customerCode == 'R' || customerCode == 'r'){
        cout << "PLease enter the number of premium channels: ";
        cin >> premiumChannels;
    } else if (customerCode == 'B' || customerCode== 'b'){
        cout << "Please enter the amount of pre-paid data in TB:";
        cin >> prePaidData;
    }
}

// Function to output the data
void outputData(int accountNumber, char customerCode, int premiumChannels, int prePaidData){
    cout << "Account Number: " << accountNumber << endl;
    cout << "Customer Code: " << customerCode << endl;
    cout << "Premium Channels: " << premiumChannels << endl;
    cout << "Pre-paid Data: " << prePaidData << endl;
}
