#include <iostream>
#include <vector>

#include "Dog.hpp"
#include "Shepard.hpp" 
#include "Terrier.hpp"  

using namespace std;

int main() {

   cout << endl;
   
   vector<Dog*> pound {
      new Shepard {"Ariel"},
      new Shepard {"Bryan"},
      new Terrier {"Clyde"}
   };

   cout << endl;

   // For each of the three dogs, call bark() and output the current health
   for (Dog* dogPtr : pound) {
      dogPtr->bark();
      dogPtr->eat();

   }

   // For loop for dynamic casting
   for (Dog* dogPtr : pound) {
      if (dynamic_cast<Shepard*>(dogPtr)) {
         Shepard* shepardPtr = dynamic_cast<Shepard*>(dogPtr);
         shepardPtr->fetch();
      }
      else if (dynamic_cast<Terrier*>(dogPtr)) {
         Terrier* terrierPtr = dynamic_cast<Terrier*>(dogPtr);
         terrierPtr->doTrick();
      }
   }

   cout << endl;

   // release objects pointed to by vector
   for (Dog* dogPtr : pound) {
      delete dogPtr;
   }
   
   cout << endl;
}

