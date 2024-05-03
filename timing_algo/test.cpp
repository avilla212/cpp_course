#include <algorithm>
#include <ctime>
#include <vector>
#include <iostream>

using namespace std;

// Function prototypes
double sort_time(vector<int> &v);
double stable_sort_time(vector<int> &v);

template <typename T> void fill_vector(vector<T> &v);
template <typename T> void fill_vector(vector<T> &v);
template <typename T> double insertion_sort(vector<T> &v);

// Constants
const int SIZE_1 (100000);
const int SIZE_2 (1000000);

int main(){

    // Vectors to store random numbers
    vector<int> v1(SIZE_1);
    vector<int> v2(SIZE_2);

    // Fill vectors with random numbers
    fill_vector(v1);
    fill_vector(v2);

    // Output time taken to sort vectors
    cout << "Time taken to sort vector of size " << SIZE_1 << " is " << sort_time(v1) << " seconds\n";
    cout << "Time taken to sort vector of size " << SIZE_2 << " is " << sort_time(v2) << " seconds\n" << endl;
    
    // Reset vectors with random numbers
    cout << "Resetting vectors with random numbers\n" << endl;
    fill_vector(v1);
    fill_vector(v2);

    // Output time taken to stable sort vectors
    cout << "Time taken to stable sort vector of size " << SIZE_1 << " is " << stable_sort_time(v1) << " seconds\n";
    cout << "Time taken to stable sort vector of size " << SIZE_2 << " is " << stable_sort_time(v2) << " seconds\n" << endl;

    // Reset vectors with random numbers
    cout << "Resetting vectors with random numbers\n" << endl;
    fill_vector(v1);
    fill_vector(v2);

    cout << "Time taken to insertion sort vector of size " << SIZE_1 << " is " << insertion_sort(v1) << " seconds\n";
    cout << "Time taken to insertion sort vector of size " << SIZE_2 << " is " << insertion_sort(v2) << " seconds\n" << endl;

    return 0;
}

// Function to fill vectors with random numbers
template <typename T> void fill_vector(vector<T> &v){

    for(auto i = v.begin(); i != v.end(); i++){
        *i = rand();
    }
}

// Function for insertion sort algorithm on vector
template <typename T> double insertion_sort(vector<T> &v){

    clock_t start = clock();
    for(auto i = v.begin(); i != v.end(); i++){
        auto key = *i; // key is the current element
        auto j = i - 1; // j is the previous element
        while(j >= v.begin() && *j > key){
            *(j + 1) = *j; // While the previous element is greater than the current element, move the previous element to the right
            j--;
        }
        *(j + 1) = key;
    }
    clock_t end = clock();
    double elapsed = double(end - start) / CLOCKS_PER_SEC;
    
    return elapsed;
}

// Function to return the time taken to sort 
double sort_time(vector<int> &v){

    clock_t start = clock();
    sort(v.begin(),v.end());
    clock_t end = clock();

    double elapsed = double(end - start) / CLOCKS_PER_SEC;
    
    return elapsed;
}

// Function to return the time taken to stable sort
double stable_sort_time(vector<int> &v){

    clock_t start = clock();
    stable_sort(v.begin(),v.end());
    clock_t end = clock();
    double elapsed = double(end - start) / CLOCKS_PER_SEC;
    
    return elapsed;
}

