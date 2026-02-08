// using recursion to calculate the sum of series upto given n term.

#include <iostream>
using namespace std;
int sumSeries(int n) {
    if (n == 0)
        return 0;
    else
        return n + sumSeries(n - 1);
}
int main() {
    int number;
    cout << "Enter a positive integer: ";
    cin >> number;
    if (number < 0) {
        cout << "Sum series is not defined for negative numbers. Positive integer rakhnu hos." << endl;
    } else {
        cout << "Sum of series up to " << number << " = " << sumSeries(number) << endl;
    }
    return 0;
}