#include <iostream>
#include <vector>
#include <chrono>
using namespace std;
using namespace chrono;

// Recursive approach
long long recursiveFib(int n) {
    if (n <= 1) {
        return n;
    }

    return recursiveFib(n - 1) + recursiveFib(n - 2);
}

// Iterative approach
long long iterativeFib(int n) {
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

// Dynamic programming approach
long long dynamicFib(int n) {
    if (n <= 1) {
        return n;
    }

    vector<long long> dp(n + 1);
    dp[0] = 0;
    dp[1] = 1;

    for (int i = 2; i <= n; i++) {
        dp[i] = dp[i - 1] + dp[i - 2];
    }

    return dp[n];
}

// Measure execution time
template <typename Function>
void benchmark(const char* name, Function function) {
    auto start = steady_clock::now();

    long long result = function(30);

    auto stop = steady_clock::now();

    double elapsed =
        duration<double, milli>(stop - start).count();

    cout << name << endl;
    cout << "Result: " << result << endl;
    cout << "Execution time: " << elapsed << " ms" << endl;
    cout << "------------------------" << endl;
}

int main() {
    benchmark("Recursive", recursiveFib);
    benchmark("Iterative", iterativeFib);
    benchmark("Dynamic Programming", dynamicFib);

    return 0;
}


