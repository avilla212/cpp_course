#include <iostream>
#include <vector>
#include <chrono>
#include <cmath>

using namespace std;
using namespace std::chrono;

void sieveOfEratosthenes(long long n) {
    vector<bool> prime(n + 1, true);
    prime[0] = prime[1] = false;

    for (long long p = 2; p * p <= n; p++) {
        if (prime[p]) {
            for (long long i = p * p; i <= n; i += p)
                prime[i] = false;
        }
    }

    long long count = 0; // Use count to limit output and check performance
    for (long long p = 2; p <= n; p++) {
        if (prime[p]) {
            ++count; // Count primes instead of printing them all
            // Uncomment below to print prime numbers, beware it might freeze your console for large n
            // cout << p << " ";
        }
    }
    cout << "Total prime numbers up to " << n << ": " << count << endl;
}

int main() {
    long long n = 300000000; // WARNING: Very large number, adjust accordingly

    auto start = high_resolution_clock::now();
    sieveOfEratosthenes(n);
    auto stop = high_resolution_clock::now();

    auto duration = duration_cast<seconds>(stop - start);

    cout << "Time taken: " << duration.count() << " seconds\n";

    return 0;
}
