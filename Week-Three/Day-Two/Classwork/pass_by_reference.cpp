// Passing Arguments by Reference
// Pass by reference directly modifies caller's variables

#include <iostream>
using namespace std;

// Function using pass by reference (uses & symbol)
void swapValues(int &a, int &b) {
    cout << "\nInside swapValues function:" << endl;
    cout << "Before swap - a: " << a << ", b: " << b << endl;
    
    int temp = a;
    a = b;
    b = temp;
    
    cout << "After swap - a: " << a << ", b: " << b << endl;
}

int main() {
    int num1, num2;
    
    // Taking input from user
    cout << "Enter first number: ";
    cin >> num1;
    cout << "Enter second number: ";
    cin >> num2;
    
    cout << "\nIn main() before swap - num1: " << num1 << ", num2: " << num2 << endl;
    
    // Calling function with pass by reference
    swapValues(num1, num2);
    
    cout << "\nIn main() after swap - num1: " << num1 << ", num2: " << num2 << endl;
    
    cout << "\nNote: Original variables were modified!" << endl;
    cout << "This is because we passed by REFERENCE (using &)." << endl;
    
    return 0;
}
