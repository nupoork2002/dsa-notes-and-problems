// O(2ⁿ) - Exponential Time
// Recursive Fibonacci is an example of O(2ⁿ).

#include <iostream>
using namespace std;

int fibonacci(int n) {
    if (n <= 1) return n;
    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main() {
    int n = 6;
    cout << "Fibonacci(" << n << ") = " << fibonacci(n) << endl;
    return 0;
}

// Very slow! Avoid exponential algorithms when possible.