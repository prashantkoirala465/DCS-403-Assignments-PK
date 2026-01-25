// Passing Arguments by Value
// When arguments are passed by value, original variable doesn't change

#include <iostream>
using namespace std;

// Function that takes parameter by value
void square(int n) {
    cout << "Inside function - Original value: " << n << endl;
    n = n * n;  // Modifying the copy
    cout << "Inside function - After squaring: " << n << endl;
}

int main() {
    int number;
    
    // Taking input from user
    cout << "Enter a number: ";
    cin >> number;
    
    cout << "\nBefore function call - number = " << number << endl;
    
    // Calling function (passing by value)
    square(number);
    
    // Original variable remains unchanged
    cout << "\nAfter function call - number = " << number << endl;
    cout << "\nNotice: The original number did not change!" << endl;
    cout << "This is because we passed by VALUE (a copy was made)." << endl;
    
    return 0;
}
