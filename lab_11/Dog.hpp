#ifndef DOG_HPP
#define DOG_HPP

#include <iostream>
#include <string>

using std::cout;
using std::endl;
using std::string;

class Dog {

    public:
        Dog(string n) : name {n}, health {100} {
            cout << name << " : Dog Constructor" << endl; }

        virtual ~Dog() {
            cout << name << " : Dog Destructor" << endl; }

        // functions with different definitions in derived classes
        virtual void bark() = 0;

        virtual void eat() = 0;


        // common functions to all Dogs:
        void setName(string n) { name = n;     }
        string getName()       { return name; }

        void setHealth(int t)  { health = t; }
        int getHealth()        { return health; }

    protected:
        string name;
        int health;
};

#endif