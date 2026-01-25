// Reverse Digits of a Number using while loop
// Example: 1234 → 4321

#include <iostream>
using namespace std;

int main() {
    int number, originalNumber, reversedNumber = 0, digit;
    
    // Taking input from user
    cout << "Enter a number to reverse: ";
    cin >> number;
    
    originalNumber = number;  // Storing original number for display
    
    // Using while loop to reverse the number
    while (number != 0) {
        digit = number % 10;              // Extract the last digit
        reversedNumber = reversedNumber * 10 + digit;  // Build reversed number
        number = number / 10;             // Remove the last digit
    }
    
    // Displaying the result
    cout << "Original Number: " << originalNumber << endl;
    cout << "Reversed Number: " << reversedNumber << endl;
    
    return 0;
}
