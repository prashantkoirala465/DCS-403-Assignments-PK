// Alphabet Pattern

#include <iostream>
using namespace std;

int main() {
    int n;
    
    // Taking input from user
    cout << "Enter the number of rows: ";
    cin >> n;
    
    // Validating input
    if (n <= 0 || n > 26) {
        cout << "Please enter a number between 1 and 26!" << endl;
        return 1;
    }
    
    cout << "\nAlphabet Pattern:" << endl;
    
    // Outer loop for rows
    for (int i = 1; i <= n; i++) {
        // Inner loop for columns (prints letters from A)
        for (int j = 0; j < i; j++) {
            cout << (char)('A' + j) << " ";  // Using ASCII values
        }
        cout << endl;  // Move to next line after each row
    }
    
    return 0;
}
