#include <iostream>
#include <cmath>  // For sqrt() function
using namespace std;

int main() {
    int n;
    cout << "Enter an integer: ";
    cin >> n;

    // Step 1: Handle edge cases for numbers less than or equal to 1
    if (n <= 1) {
        cout << "false" << endl;  // Numbers less than or equal to 1 are not prime
        return 0;
    }

    // Step 2: Check for divisibility from 2 to sqrt(n)
    bool isPrime = true;  // Assume the number is prime initially
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) {  // If n is divisible by i, it is not prime
            isPrime = false;
            break;
        }
    }

    // Step 3: Output the result
    if (isPrime) {
        cout << "true" << endl;  // It's a prime number
    } else {
        cout << "false" << endl;  // It's not a prime number
    }

    return 0;
}
