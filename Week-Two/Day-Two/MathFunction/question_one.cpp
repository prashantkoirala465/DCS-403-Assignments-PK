// Write a program to find the square root, power, and absolute value of a number using mathematical functions.

#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double num;
    cout << "Enter a number: ";
    cin >> num;

    double absVal = fabs(num);
    double sqrtVal = sqrt(absVal);
    double powerVal = pow(2, 3); // example 2^3

    cout << "Square root of " << absVal << " = " << sqrtVal << endl;
    cout << "2 raised to power 3 = " << powerVal << endl;
    cout << "Absolute value of " << num << " = " << absVal << endl;

    return 0;
}

