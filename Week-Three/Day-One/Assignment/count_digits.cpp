// Count Digits of a Number using do-while loop

#include <iostream>
using namespace std;

int main() {
    int number, originalNumber, count = 0;
    
    // Taking input from user
    cout << "Enter a number: ";
    cin >> number;
    
    originalNumber = number;  // Storing original number for display
    
    // Using do-while loop to count digits
    // do-while ensures at least one iteration (handles 0 correctly)
    do {
        number = number / 10;  // Remove the last digit
        count++;               // Increment the digit count
    } while (number != 0);
    
    // Displaying the result
    cout << "Number " << originalNumber << " has " << count << " digit(s)" << endl;
    
    return 0;
}
