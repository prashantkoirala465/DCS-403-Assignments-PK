// Compute the nth Fibonacci number using recursion.

#include <iostream>
using namespace std;

// Recursive function to calculate Fibonacci number
int fib(int n) {
    if (n == 0) return 0;      // Base case
    if (n == 1) return 1;      // Base case
    return fib(n - 1) + fib(n - 2);
}

int main() {
    int n;
    cout << "Enter n: ";
    cin >> n;

    cout << "The " << n << "th Fibonacci number is: " << fib(n);
    cout << endl;
    return 0;
}
