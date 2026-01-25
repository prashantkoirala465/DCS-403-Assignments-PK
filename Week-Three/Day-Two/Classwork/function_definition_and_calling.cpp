// Defining and Calling a Function
// Function add() that takes two integers and returns their sum

#include <iostream>
using namespace std;

// Function prototype (declaration)
int add(int a, int b);

int main() {
    int num1, num2, result;
    
    // Taking input from user
    cout << "Enter first number: ";
    cin >> num1;
    cout << "Enter second number: ";
    cin >> num2;
    
    // Calling the add function
    result = add(num1, num2);
    
    // Displaying the result
    cout << "Sum of " << num1 << " and " << num2 << " is: " << result << endl;
    
    return 0;
}

// Function definition
int add(int a, int b) {
    return a + b;  // Returns the sum of two numbers
}
