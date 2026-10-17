#include <iostream>
using namespace std;

// Fibonacci using iteration
long long fibonacciIterative(int n) {
    if (n <= 1) {
        return n;
    }

    long long a = 0;
    long long b = 1;

    for (int i = 2; i <= n; i++) {
        long long next = a + b;
        a = b;
        b = next;
    }

    return b;
}

int main() {
    int n = 30;

    cout << "FIBONACCI USING ITERATION\n";
    cout << "Position: " << n << '\n';
    cout << "Fibonacci value: "
         << fibonacciIterative(n) << '\n';

    return 0;
}
