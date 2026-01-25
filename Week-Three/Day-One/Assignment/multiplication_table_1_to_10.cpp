// Print Multiplication Tables (1 to 10) using nested loops

#include <iostream>
using namespace std;

int main() {
    cout << "Multiplication Tables (1 to 10)" << endl;
    cout << "================================" << endl << endl;
    
    // Outer loop for numbers 1 to 10
    for (int number = 1; number <= 10; number++) {
        cout << "Table of " << number << ":" << endl;
        
        // Inner loop for multipliers 1 to 10
        for (int multiplier = 1; multiplier <= 10; multiplier++) {
            cout << number << " x " << multiplier << " = " << (number * multiplier) << endl;
        }
        
        cout << endl;  // Extra line for spacing between tables
    }
    
    return 0;
}
