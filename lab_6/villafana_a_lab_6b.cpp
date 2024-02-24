#include <iostream>
using namespace std;

// Constructor
void checkPrimes(Primes& primes);

class Primes {
    public:
        static const int size = 300;
        bool array[size];

        // Constructor
        Primes()
        {
            // Setting each value in array to true
            for (int i = 0; i < size; ++i)
            {
                array[i] = true;
            }
        }
};

int main()
{

    // Creating instance
    Primes primes;

    // Call the checkPrimes function
    checkPrimes(primes);

    // Print the aray after the checkPrimes function
    for (int i = 0; i < Primes::size; ++i)
    {
        cout << i << " " << primes.array[i] << endl;
    }

    return 0;
}

// Funnction to check our primes array indices. If index is a prime, dont change.
// If index is not a prime, change to false
void checkPrimes(Primes& primes) // reference to primes object

{
    // 0 and 1 are not prime
    primes.array[0] = false;
    primes.array[1] = false;

    // Loop through the array starting from primes[2]
    for (int i = 2; i < Primes::size; ++i)
    {
        // Inner for loop through the remainer of the array and set false to non-prime numbers
        for (int j = i + 1; j < Primes::size;++j)
        {
            if (j % i == 0)
            {
                primes.array[j] = false;
            }
        }
    }
}