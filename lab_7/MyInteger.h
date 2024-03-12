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

        // Multiplies the argument provided by the private data member
        void multiply(int value){
            this->value *= value;
        }

        /*
            int compare(MyInteger) - accepts as an argument an object of class MyInteger, 
            compares the integer stored in it to the integer stored in the private data member (variable) 
            and returns an integer.  The return integer should be:

            0 if  num1 < num2
            1 if num1 = num2
            2 if num1 > num2
        */
        int compare(MyInteger myInt){
            if (value < myInt.get()){
                return 0;
            } else if (value == myInt.get()){
                return 1;
            } else {
                return 2;
            }
        }


    private:
        int value;

            
};