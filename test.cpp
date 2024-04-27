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
template <typename T> void insertion_sort(vector<T> &v);

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
    cout << "Time taken to sort vector of size " << SIZE_2 << " is " << sort_time(v2) << " seconds\n";
    
    // Reset vectors with random numbers
    cout << "Resetting vectors with random numbers\n";
    fill_vector(v1);
    fill_vector(v2);

    // Output time taken to stable sort vectors
    cout << "Time taken to stable sort vector of size " << SIZE_1 << " is " << stable_sort_time(v1) << " seconds\n";
    cout << "Time taken to stable sort vector of size " << SIZE_2 << " is " << stable_sort_time(v2) << " seconds\n";

    // Reset vectors with random numbers
    cout << "Resetting vectors with random numbers\n";
    fill_vector(v1);
    fill_vector(v2);

    cout << "Time taken to insertion sort vector of size " << SIZE_1 << " is " << insertion_sort(v1) << " seconds\n";
    cout << "Time taken to insertion sort vector of size " << SIZE_2 << " is " << insertion_sort(v2) << " seconds\n";

    return 0;
}

// Function to fill vectors with random numbers
template <typename T> void fill_vector(vector<T> &v){

    for(auto i = i.begin(); i != v.end(); i++){
        *i = rand();
    }
}

// Function for insertion sort algorithm on vector
template <typename T> void insertion_sort(vector<T> &v){

    clock_t start,end;
    start = clock();
    // Loop through vector
    for (auto i = v.begin(); i != v.end(); i++){
        // Save value of next item to insert
        T value = *i;

        // Initialize location to place element
        auto j = i;

        // Search for the location in which to place the current element
        while ((j > 0) && (*(j-1) > value)){
            // shift element one slot to the right
            *j = *(j-1);
            --j;
        }

        *j = value;
    }
    end = clock();
    double elapsed = double(end - start) / CLOCKS_PER_SEC;

    return elapsed;
}

// Function to return the time taken to sort 
double sort_time(vector<int> &v){

    clock_t start,end;
    sort(v.begin(),v.end());
    double elapsed = double(end - start) / CLOCKS_PER_SEC;
    
    return elapsed;
}

// Function to return the time taken to stable sort
double stable_sort_time(vector<int> &v){

    clock_t start,end;
    stable_sort(v.begin(),v.end());
    double elapsed = double(end - start) / CLOCKS_PER_SEC;
    
    return elapsed;
}

