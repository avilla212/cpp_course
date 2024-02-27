#include <iostream>
#include <algorithm>
#include <array>
using namespace std;

void newLine();
void convertToUppercase(char* s);
void printArray(int arr[], int size);

int main()
{

    char name[] = "John";

    cout << "Before: " << name << endl;
    convertToUppercase(name);
    cout << "After: " << name << endl;

    cout << "\nBuilt in arrays vs Array class" << endl;
    cout << "---------------------------------" << endl;

    // Built in arrays
    int v[5] {0, 1, 2, 3, 4};

    cout << "Built in array: " << endl;
    printArray(v, 5);
    cout << endl;

    // Array class
    array<int,5> v2 {2,3,1,1,4};
    cout << "\nArray class: " << endl;

    // sort the array
    cout << "Before sorting v2 array class: " << endl;
    for (int i = 0; i < v2.size(); i++)
    {
        cout << v2[i] << " ";
    }

    newLine();

    sort(v2.begin(), v2.end());

    cout << "\nAfter sorting v2 array class: " << endl;
    for (int i = 0; i < v2.size(); i++)
    {
        cout << v2[i] << " ";
    }

    newLine();  

    int v3[5] {1,2,3,4,5};
    
    // Both point to memory location of the first element   
    int* v3Ptr2 {v3};
    int* v3Ptr {&v3[0]};

    cout << "Memory location of first element" << endl;
    cout << "v3Ptr2: " << v3Ptr2 << " and v3Ptr: " << v3Ptr << endl;

    newLine();

    cout << "Values of the pointers" << endl;
    cout << "v3Ptr2: " << *v3Ptr2 << " and v3Ptr: " << *v3Ptr << endl;

    array<int,5> v4 {1,2,3,4,5};

    cout << "Memory location of first element of array class" << endl;
    cout << "v4: " << &v4[0] << endl;



    return 0;
}

void convertToUppercase(char* s){

    while (*s != '\0'){
        *s = toupper(*s);
        s++;
    }
}

// Function to print arrays
void printArray(int arr[], int size){
    for (int i = 0; i < size; i++){
        cout << arr[i] << " ";
    }
}

void newLine(){
    cout << endl;
}


