// Inverted Right-Angled Triangle Pattern

#include <iostream>
using namespace std;

int main() {
    int n;
    
    // Taking input from user
    cout << "Enter the number of rows: ";
    cin >> n;
    
    // Validating input
    if (n <= 0) {
        cout << "Please enter a positive number!" << endl;
        return 1;
    }
    
    cout << "\nInverted Right-Angled Triangle:" << endl;
    
    // Outer loop for rows
    for (int i = n; i >= 1; i--) {
        // Inner loop for columns (prints i stars in each row)
        for (int j = 1; j <= i; j++) {
            cout << "*";
        }
        cout << endl;  // Move to next line after each row
    }
    
    return 0;
}
