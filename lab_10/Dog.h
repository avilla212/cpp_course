// Derived class
#ifndef DOG_H
#define DOG_H

#include <iostream>
#include <string>
#include "Animal.h"

class Dog : public Animal{
    public:
    
        Dog(std::string n, int a, double weight, std::string breed) : Animal(n, a, weight), breed(breed) {}

        // Setters
        void setBreed(std::string b) { breed = b; }

        // Getters
        std::string getBreed() { return breed; }
        int getBallsFetched() { return ballsFetched; }

        // Other methods
        void bark(){
            std::cout << "Woof! Woof!" << std::endl;
        }

        void fetch(){
            std::cout << "Dog is fetching" << std::endl;
            ballsFetched++;
        }

        // Overriding the eat method
        void eat(){
            std::cout << "Dog is eating" << std::endl;
            setWeight(getWeight() + 0.5);
        }

    private:

        std::string breed;
        int ballsFetched {0};
};

#endif