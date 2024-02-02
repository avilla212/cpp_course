// Account class with name and balance data members, and a 
// constructor and deposit function that each perform validation.
#include <string>
#include <iostream>

class Account {

   public:
      // Account constructor with two parameters  
      Account(std::string accountName, int initialBalance) 
         : name{accountName} { // assign accountName to data member name

         // validate that the initialBalance is greater than 0; if not,
         // data member balance keeps its default initial value of 0
         if (initialBalance > 0) { // if the initialBalance is valid
            balance = initialBalance; // assign it to data member balance
         }
      }

      // function that deposits (adds) only a valid amount to the balance
      void deposit(int depositAmount) {
         if (depositAmount > 0) { // if the depositAmount is valid
            balance = balance + depositAmount; // add it to the balance 
         }
      }

      // function to withdraw money from the account
      void withdraw(int withdrawAmount) {
         if (withdrawAmount > balance) {
            std::cout << "Withdraw amount exceeds balance\n";
         } else {
            balance -= withdrawAmount;
            std::cout << "Withdraw successful\n"
         }
      }

      // function returns the account balance
      int getBalance() const {
         return balance;
      }

      // function that sets the name
      void setName(std::string accountName) {
         name = accountName;
      }

      // function that returns the name
      std::string getName() const {
         return name;
      }
   private:
      std::string name; // account name data member 
      int balance{0}; // data member with default initial value
}; // end class Account

