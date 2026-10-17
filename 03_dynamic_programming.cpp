#include <iostream>
#include <vector>
using namespace std;

// Fibonacci using dynamic programming
long long fibonacciDP(int n) {
    if (n <= 1) {
        return n;
    }

    vector<long long> fib(n + 1);

    fib[0] = 0;
    fib[1] = 1;

    for (int i = 2; i <= n; i++) {
        fib[i] = fib[i - 1] + fib[i - 2];
    }

    return fib[n];
}

int main() {
    int n = 30;

    cout << "FIBONACCI USING DYNAMIC PROGRAMMING\n";
    cout << "Position: " << n << '\n';
    cout << "Fibonacci value: "
         << fibonacciDP(n) << '\n';

    return 0;
}
