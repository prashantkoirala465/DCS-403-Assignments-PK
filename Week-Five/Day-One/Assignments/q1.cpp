// Write a recursive function that prints numbers from 1 to N.

#include <iostream>
using namespace std;
void printNumbers(int n) {
    if (n == 0) { // base case
        return;
    }
    printNumbers(n - 1); // Recursive call with (n-1)
    cout << n << " "; 
}
int main() {
    int number;
    cout << "Enter a positive integer: ";
    cin >> number;
    if (number < 0) {
        cout << "Please enter a positive integer." << endl;
    } else {
        cout << "Numbers from 1 to " << number << ": ";
        printNumbers(number);
        cout << endl; 
    }
    return 0;
}
