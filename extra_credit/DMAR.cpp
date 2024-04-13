#include <iostream>
#include <cmath>

// Prototype to check if memory is deallocated
void checkMemoryDeallocation(int *ptr);
void checkMemoryDeallocation(double *ptr);
void checkMemoryDeallocation(const double *ptr);


int main(){

    int *numClasses; // Pointer to a new int
    numClasses = new int; // Memory to hold a integer is created and that address is stored in numClasses

    int *sum; 
    sum = new int{0}; // Memory to hold a integer is created and that address is stored in sum and the value is initialized to 0

    std::cout << "Enter the number of classes you are taking this semester: ";
    std::cin >> *numClasses; // Value entered by the user is stored in the memory location pointed by numClasses

    double *grades;
    grades = new double[*numClasses]; // Memory to hold a double array of size numClasses is created and the address of the first element is stored in grades

    for (int i = 1; i <= *numClasses; i++){
        std::cout << "Enter grade of class " << i << ": ";
        std::cin >> grades[i];        
        
        *sum += grades[i];
    }

    std::cout << std::endl;

    // Display the grades
    for (int i = 1; i <= *numClasses; i++){
        std::cout << "Grade for class " << i << " is " << grades[i] << std::endl;
    }

    double *average;
    average = new double{0}; // Memory to hold a double is created and the address is stored in average and the value is initialized to 0
    
    // Avereage is coming out as in integer, need to cast it to double
    *average = static_cast<double>(*sum) / *numClasses;

    std::cout << std::endl;

    std::cout << "Average is " << *average << std::endl;

    std::cout << std::endl;

    // Free the memory
    delete[] grades;
    delete numClasses;
    delete sum;
    delete average;

    const double *PI;
    PI = new double{3.14}; // Memory to hold a double is created and the address is stored in PI and the value is initialized to 3.14159

    double *radius;
    radius = new double; // Memory to hold a double is created and the address is stored in radius

    double *area;
    area = new double; // Memory to hold a double is created and the address is stored in area

    std::cout << "Enter the radius of the circle: ";
    std::cin >> *radius; // Value entered by the user is stored in the memory location pointed by radius

    *area = *PI * (*radius) * (*radius);

    std::cout << "The area of your circle is " << *area << std::endl;

    delete PI;
    delete radius;
    delete area;

    return 0;
}

