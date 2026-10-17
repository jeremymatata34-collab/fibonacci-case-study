#include <iostream>
#include <string>
using namespace std;

// Calculate loyalty reward points
long long fibonacciPoints(int n) {
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
    string customerName;
    int level;

    cout << "CUSTOMER LOYALTY REWARD SYSTEM\n";
    cout << "Enter customer name: ";
    getline(cin, customerName);

    cout << "Enter reward level (0-30): ";
    cin >> level;

    if (level < 0 || level > 30) {
        cout << "Invalid level. Enter a value from 0 to 30.\n";
        return 1;
    }

    cout << "\nCustomer: " << customerName << '\n';
    cout << "Reward level: " << level << '\n';
    cout << "Fibonacci reward points: "
         << fibonacciPoints(level) << '\n';

    return 0;
}
