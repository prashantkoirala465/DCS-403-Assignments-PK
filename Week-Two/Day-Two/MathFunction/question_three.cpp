// Write a program to find the largest and smallest of two numbers using `fmax()` and `fmin()`.

#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;

    cout << "Maximum = " << fmax(a, b) << endl;
    cout << "Minimum = " << fmin(a, b) << endl;

    return 0;
}
