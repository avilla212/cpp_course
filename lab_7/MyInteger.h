#include <iostream>

using namespace std;

class MyInteger {

    public:

        // Returns the value of the integer
        int get(){
            return value;
        }
        // Sets the value of the integer
        void set(int value){
            this->value = value;
        }
        // Adds the arguemnt to the private member variable
        void add(int value){
            this->value += value;
        }
        // Subtracts the argument provided by the private data member
        void subtract(int value){
            this->value -= value;
        }



    private:
        int value;
}