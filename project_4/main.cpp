#include <iostream>
#include <ctime>
#include <iomanip>

using namespace std;

bool isPrime(int n) {
    if (n <= 1) {
        return false;
    }
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    clock_t start, end;
    start = clock(); // Start timing

    cout << "Prime numbers between 1 and 300 are: " << endl;
    for(int num = 1; num <= 30000; num++) {
        if (isPrime(num)) {
            cout << num << " ";
        }
    }

    end = clock(); // End timing
    double time_taken = double(end - start) / double(CLOCKS_PER_SEC);
    cout << "\nTime taken by program is : " << fixed << time_taken << setprecision(5);
    cout << " secs " << endl;
    return 0;
}
