// Write a recursive function that calculates the sum of digits of a given number.

#include <iostream>
using namespace std;    
int sumOfDigits(int n) {
    if (n == 0) // base case
        return 0;
    else
        return (n % 10) + sumOfDigits(n / 10); // recursive call
}
int main() {
    int number;
    cout << "Enter a positive integer: ";
    cin >> number;
    if (number < 0) {
        cout << "Please enter a positive integer." << endl;
    } else {
        cout << "Sum of digits of " << number << " = " << sumOfDigits(number) << endl;
    }
    return 0;
}