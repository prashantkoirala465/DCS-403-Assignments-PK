// Factorial of a Number using for loop
// Formula: n! = n × (n-1) × (n-2) × ... × 1

#include <iostream>
using namespace std;

int main() {
    int number;
    long long factorial = 1;  // Using long long to handle large factorials
    
    // Taking input from user
    cout << "Enter a positive integer: ";
    cin >> number;
    
    // Validating input
    if (number < 0) {
        cout << "Factorial is not defined for negative numbers!" << endl;
        return 1;
    }
    
    // Calculating factorial using for loop
    for (int i = 1; i <= number; i++) {
        factorial *= i;  // Multiplying running product
    }
    
    // Displaying the result
    cout << "Factorial of " << number << " is: " << factorial << endl;
    
    return 0;
}
