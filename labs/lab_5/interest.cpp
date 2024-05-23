// Compound-interest calculations with for loop.
#include <iostream>
#include <iomanip>
#include <cmath> // for pow function
using namespace std;

int main() {
  
   // set floating-point number format
   cout << fixed << setprecision(2) << endl;

   double principal {24.00}; // initial amount before interest
   double rate {0.05};         // interest rate

   cout << "Initial principal: " << principal << endl;
   cout << "    Interest rate:  " << rate << endl;

   // display headers
   cout << "\nYear" << setw(20) << "Amount on deposit" << endl;

   // calculate amount on deposit for every 100 years stopping at 300 and starting at 100
   for (unsigned int year {100}; year <= 300; year += 100) {
      // calculate new amount for specified year
      double amount = principal * pow(1.0 + rate, year);

      // display the year and the amount
      cout << setw(4) << year << setw(20) << amount << endl;
   
   }
   
   // display todays amount with the interest rate
   cout << "Today " << setw(18)<< principal * pow(1.0 + rate, 398) << endl;
   cout << endl;

   // Outer for loop for rates .06,.07, amd .08
   for (double rate {0.06}; rate <= 0.08; rate += 0.01) {
      cout << "Initial principal: " << principal << endl;

      // move rate to the left
      cout << "    Interest rate:  " << rate << endl;

      // display headers
      cout << "\nYear" << setw(20) << "Amount on deposit" << endl;

      // calculate amount on deposit for every 100 years stopping at 300 and starting at 100
      for (unsigned int year {100}; year <= 300; year += 100) {
         // calculate new amount for specified year
         double amount = principal * pow(1.0 + rate, year);

         // display the year and the amount
         cout << setw(4) << year << setw(20) << amount << endl;
      } // end for

      cout << "Today " << setw(18) << principal * pow(1.0 + rate, 398) << endl;
      cout << endl;
   } // end for

   

   return 0;
}