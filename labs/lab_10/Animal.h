#ifndef ANIMAL_H
#define ANIMAL_H

#include <iostream>
#include <string>

class Animal{
    public:

        Animal(std::string n, int a, double weight) : name(n), age(a), weight(weight) {}    

        // Setters
        void setName(std::string n) { name = n; }
        void setAge(int a) { age = a; }
        void setWeight(double w) { weight = w; }

        // Getters
        std::string getName() { return name; }
        int getAge() { return age; }
        double getWeight() { return weight; }

        // Other methods
        void eat(){
            
            std::cout << "Animal is eating" << std::endl;
            weight += 0.5;

        }

        void workout(){

            std::cout << "Animal is working out" << std::endl;
            weight -= 0.5;

        }


    private:
    
        std::string name;
        int age;
        double weight;
};

#endif