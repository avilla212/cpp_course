#include <iostream>
#include <array>
#include <iomanip>  

using namespace std;

// Use an array to find the prime numbers from  2 to 300

int main(){

    int primeCount {0};

    array<bool, 300> primes;
    primes.fill(true); // Could also use a for loop to fill the array with true

    // Start looping from 2 to 300
    for (int i = 2; i < primes.size();i++)
    {
        // If the number is prime, set all multiples to false
        if (primes[i])
        {
            // Set all multiples of i to false
            for (int j = 2; i * j < primes.size(); j++)
            {
                primes[i * j] = false;
            }
        }
    }

    // Display the prime numbers    
    cout << "Prime numbers from 2 to 300 are: " << endl;
    cout << endl;
    for (int i = 2; i < primes.size(); i++)
    {
        if (primes[i])
        {
            // Format the output to have 5 numbers per line
            cout << setw(5) << i << " ";
            primeCount++;

            // If 5 numbers have been printed, start a new line
            if (primeCount % 5 == 0)
            {
                cout << endl;
            }
        }
    }

    return 0;
}