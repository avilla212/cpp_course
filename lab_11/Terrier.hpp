#ifndef TERRIER_HPP
#define TERRIER_HPP

#include <iostream>
#include <string>
#include "Dog.hpp"

using std::cout;

class Terrier : public Dog {

    public:
        Terrier(std::string n) : Dog(n), tricks {0} {
            cout << getName() << " : Terrier Constructor" << endl;
        }
        ~Terrier() override {
            cout << getName() << " : Terrier Destructor" << endl;
        }

        void bark() override {
            cout << getName() << " barked (Terrier)" << endl;
            setHealth(getHealth()-15);
            cout << "Health of " << getName() << " is " << getHealth() << endl;
        }

        // define eat()
        void eat() override {
            setHealth(90);
            cout << getName() << " ate and health is " << getHealth() << endl;
            cout << endl;
        }


        // functions specific to Terrier
        void doTrick() {
            cout << getName() << " did a trick\n";
            tricks += 1;
        }

        int getNumTricks() { return tricks; }

    private:
        int tricks;
};

#endif
