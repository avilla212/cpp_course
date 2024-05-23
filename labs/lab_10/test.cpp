#include "Animal.h"
#include "Dog.h"

#include <iostream>
#include <string>

void displayAnimal(Animal a);
void displayDog(Dog d);


int main(){
    
    // Create two objects being created and used, one of the base class and one of the derived class
    Animal a("Animal", 5, 10.0);
    Dog d("Dog", 3, 15.0, "Golden Retriever");

    // Display the base class object
    std::cout << "Displaying Animal object" << std::endl;
    displayAnimal(a);
    std::cout << std::endl;

    // Display the derived class object
    std::cout << "Displaying Dog(derived) object" << std::endl;
    displayDog(d);
    std::cout << std::endl;

    // Call the eat method for the base class object
    std::cout << "Calling eat method for Animal(base) object" << std::endl;
    a.eat();
    std::cout << "Weight after eating: " << a.getWeight() << std::endl;
    std::cout << std::endl;

    // Call the eat method for the derived class object
    std::cout << "Calling eat method for Dog(derived) object" << std::endl;
    d.eat();
    std::cout << "Weight after eating: " << d.getWeight() << std::endl;
    std::cout << std::endl;

    // Call the fetch method for the derived class object
    std::cout << "Calling fetch method for Dog(derived) object" << std::endl;
    d.fetch();
    std::cout << "Balls fetched: " << d.getBallsFetched() << std::endl;

    // Call the bark method for the derived class object
    std::cout << "Calling bark method for Dog(derived) object" << std::endl;
    d.bark();
    std::cout << std::endl;

    return 0;
}

void displayAnimal(Animal a){

    std::cout << "Name: " << a.getName() << std::endl;
    std::cout << "Age: " << a.getAge() << std::endl;
    std::cout << "Weight: " << a.getWeight() << std::endl;

}

void displayDog(Dog d){

    std::cout << "Name: " << d.getName() << std::endl;
    std::cout << "Age: " << d.getAge() << std::endl;
    std::cout << "Weight: " << d.getWeight() << std::endl;
    std::cout << "Breed: " << d.getBreed() << std::endl;
    
}

