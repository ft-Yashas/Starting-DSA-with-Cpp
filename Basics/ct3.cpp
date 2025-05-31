#include <iostream>
using namespace std;

// Function to check if a number is prime
bool isPrime(int n) {
    if (n <= 1)
        return false; // 0 and 1 are not prime

    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0)
            return false; // divisible by a number other than 1 and itself
    }

    return true; // number is prime
}

int main() {
    int n;

    cout << "Enter a number: ";
    cin >> n;

    if (isPrime(n))
        cout << n << " is a prime number." << endl;
    else
        cout << n << " is not a prime number." << endl;

    return 0;
}
