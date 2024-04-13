#ifndef SHEPARD_HPP
#define SHEPARD_HPP

#include <iostream>
#include <string>
#include "Dog.hpp"

using std::cout;

class Shepard : public Dog {

    public:
        Shepard(std::string n) : Dog(n), ballsFetched {0} {
            cout << getName() << " : Shepard Constructor" << endl;
        }
        ~Shepard() override {
            cout << getName() << " : Shepard Destructor" << endl;
        }

        void bark() override {
            cout << getName() << " barked (Shepard)" << endl;
            setHealth(getHealth()-20);
            cout << "Health of " << getName() << " is " << getHealth() << endl;
        }

        // define eat()
        void eat() override {
            setHealth(100);
            cout << getName() << " ate and health is " << getHealth() << endl;
            cout << endl;
        }

        // functions specific to Shepards
        void fetch() {
            cout << getName() << " fetched a ball\n";
            ballsFetched += 1;
        }

       int getFetched() { return ballsFetched; }

    private:
        int ballsFetched;
};

#endif