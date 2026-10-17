#include <iostream>
using namespace std;

// Fibonacci using recursion
long long fibonacciRecursive(int n) {
    if (n <= 1) {
        return n;
    }

    return fibonacciRecursive(n - 1)
         + fibonacciRecursive(n - 2);
}

int main() {
    int n = 30;

    cout << "FIBONACCI USING RECURSION\n";
    cout << "Position: " << n << '\n';
    cout << "Fibonacci value: "
         << fibonacciRecursive(n) << '\n';

    return 0;
}
