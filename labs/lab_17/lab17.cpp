#include <iostream>
using namespace std;

double quotient(int, int);

int main() {
   int number1 {0};
   int number2 {0};

   cout << "Enter two integers (or a letter to exit): ";

   while (cin >> number1 >> number2){
      try {
         if (number2 == 0) {
            throw invalid_argument("Cannot divide by zero");
         }
         double result { quotient(number1, number2) };
         cout << "The quotient is: " << result << endl;
      } catch (invalid_argument &e) {
         cout << "Exception occurred: " << e.what() << endl;
      } 
      cout << "\nEnter two integers (or a letter to exit): ";
   }

   // OLD CODE:

   // while (cin >> number1 >> number2) {
      
   //    double result { quotient(number1, number2) };
   //    cout << "The quotient is: " << result << endl;         
      
   //    cout << "\nEnter two integers (or a letter to exit): ";

   // }

   // throw an invalid_argument exception if the denominator is 0
}

double quotient(int numerator, int denominator) {
   return static_cast<double>(numerator) / denominator;
}