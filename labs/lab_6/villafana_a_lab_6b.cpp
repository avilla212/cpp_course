#include <iostream>
#include <array>
#include <iomanip>  

using namespace std;

void markNonPrimes(array<bool,300>& primes);
void displayPrimes(const array<bool,300>& primes); // Const since array is read only

int main(){

    int primeCount {0};

    array<bool, 300> primes;
    primes.fill(true); // Could also use a for loop to fill the array with true

    markNonPrimes(primes);
    displayPrimes(primes);

    return 0;
}

// Function to loop through array from 2-300
void markNonPrimes(array<bool,300>& primes){

    for (int i =2; i < primes.size();i++){
        if (primes[i]){
            for (int j = 2; i * j < primes.size(); j++){
                primes[i * j] = false;
            }
        }
    }
}

// Const since array is read only
void displayPrimes(const array<bool,300>& primes){
    
    int count {0};

    cout << "Primes from 2 to 300 are: \n" << endl; 
    for (int i = 2; i < primes.size(); i ++){
        if (primes[i]){
            cout << setw(5) << i;
            count ++;
            
            // Keeping 5 numbers per line
            if (count % 5 == 0){
                cout << endl;
            }
        }
    }
}