#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

void displayRates();
void accountInfo(int& accountNumber, char& customerCode, int& premiumChannels, int& prePaidData, const string& company);
void processResidential(int accountNumber, int premiumChannels, const string& company);
void processBusiness(int accountNumber, int premiumChannels, int prePaidData, const string& company);

int main() {
    const string company = "Alexander Villafana's Cable Company";

    char customerCode;
    int accountNumber, premiumChannels, prePaidData;

    // Display rates for both residential and business customers
    displayRates();

    // Run the program three times with different inputs
    for (int i = 1; i <= 3; ++i) {
        cout << "Run " << i << endl;
        accountInfo(accountNumber, customerCode, premiumChannels, prePaidData, company);
    }

    return 0;
}

// Function to display rates for residential and business customers
void displayRates() {
    cout << "Rates:\n";
    cout << left << setw(30) << "Residential:" << setw(30) << "Business:" << endl;
    cout << left << setw(30) << "1. Bill Processing fee (flat rate): $4.50" << setw(30) << "1. Bill Processing fee (flat rate): $15.00" << endl;
    cout << left << setw(30) << "2. Internet connectivity (flat rate): $70.99" << setw(30) << "2. Internet connectivity, pre-paid data: $75.00 for up to 10TB of data, $5.00 for each additional 1TB over 10" << endl;
    cout << left << setw(30) << "3. Premium cable channels (flat rate): $7.50" << setw(30) << "3. Premium cable channels (flat rate): $10.00 per channel" << endl;
    cout << endl;
}

// Function to get account information from the user
void accountInfo(int& accountNumber, char& customerCode, int& premiumChannels, int& prePaidData, const string& company) {
    cout << "Please enter your account number: ";
    cin >> accountNumber;

    cout << "Please enter customer code (R for residential, B for business): ";
    cin >> customerCode;

    if (toupper(customerCode) == 'R') {
        cout << "Please enter the number of premium channels: ";
        cin >> premiumChannels;
        processResidential(accountNumber, premiumChannels, company);
    } else if (toupper(customerCode) == 'B') {
        cout << "Please enter the number of premium channels: ";
        cin >> premiumChannels;
        cout << "Please enter the amount of pre-paid data in TB: ";
        cin >> prePaidData;
        processBusiness(accountNumber, premiumChannels, prePaidData, company);
    } else {
        cout << "Invalid customer code entered. Please enter R for residential or B for business." << endl;
    }
}

// Function to process data for residential customers
void processResidential(int accountNumber, int premiumChannels, const string& company) {
    const double billProcessingFee = 4.50;
    const double internetConnectivity = 70.99;
    const double premiumCableChannels = 7.50;

    double total = billProcessingFee + internetConnectivity + (premiumChannels * premiumCableChannels);

    cout << company << endl;
    cout << "Account Number: " << accountNumber << endl;
    cout << "Type of customer: Residential" << endl;
    cout << "Summary of costs:" << endl;
    cout << "Bill processing fee: $" << billProcessingFee << endl;
    cout << "Internet connectivity: $" << internetConnectivity << endl;
    cout << "Premium channels total cost: $" << premiumChannels * premiumCableChannels << endl;
    cout << "Bill total for the month: $" << total << endl;
    cout << endl;
}

// Function to process data for business customers
void processBusiness(int accountNumber, int premiumChannels, int prePaidData, const string& company) {
    const double billProcessingFee = 15.00;
    const double internetConnectivityBase = 75.00;
    const double internetConnectivityPerTB = 5.00;
    const double premiumCableChannels = 10.00;

    double internetConnectivity = internetConnectivityBase;
    if (prePaidData > 10) {
        internetConnectivity += (prePaidData - 10) * internetConnectivityPerTB;
    }

    double total = billProcessingFee + internetConnectivity + (premiumChannels * premiumCableChannels);

    cout << company << endl;
    cout << "Account Number: " << accountNumber << endl;
    cout << "Type of customer: Business" << endl;
    cout << "Summary of costs:" << endl;
    cout << "Bill processing fee: $" << fixed << setprecision(2) << billProcessingFee << endl;
    cout << "Internet connectivity: $" << internetConnectivity << endl;
    cout << "Premium channels total cost: $" << premiumChannels * premiumCableChannels << endl;
    cout << "Bill total for the month: $" << total << endl;
    cout << endl;
}
