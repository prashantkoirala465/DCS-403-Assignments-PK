// using recursion calculate fibonacci series upto given n term.

#include <iostream>
using namespace std;

int fibonacci(int n) {
    if (n == 0)
        return 0;
    else if (n == 1)
        return 1;
    else
        return fibonacci(n - 1) + fibonacci(n - 2);
}
int main() {
    int number;
    cout << "Enter a positive integer: ";
    cin >> number;
    if (number < 0) {
        cout << "Fibonacci series is not defined for negative numbers. Positive integer rakhnu hos." << endl;
    } else {
        cout << "Fibonacci series up to " << number << " terms:" << endl;
        for (int i = 0; i < number; i++) {
            cout << fibonacci(i) << " ";
        }
        cout << endl;
    }
    return 0;
}