// Inline Functions
// Used for small, frequently called functions

#include <iostream>
using namespace std;

// Inline function - compiler replaces function call with actual code
// Good for small, frequently called functions
inline int cube(int n) {
    return n * n * n;
}

int main() {
    int number;
    
    cout << "Enter a number to find its cube: ";
    cin >> number;
    
    cout << "Cube of " << number << " is: " << cube(number) << endl;
    
    // Testing with multiple values
    cout << "\nCubes of numbers 1 to 5:" << endl;
    for (int i = 1; i <= 5; i++) {
        cout << "Cube of " << i << " = " << cube(i) << endl;
    }
    
    cout << "\nNote: 'inline' suggests compiler to replace function call with code." << endl;
    cout << "This reduces function call overhead for small functions." << endl;
    
    return 0;
}
