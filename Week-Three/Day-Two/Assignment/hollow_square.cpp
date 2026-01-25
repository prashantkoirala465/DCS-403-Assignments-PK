// Hollow Square Pattern

#include <iostream>
using namespace std;

int main() {
    int n;
    
    // Taking input from user
    cout << "Enter the size of square: ";
    cin >> n;
    
    // Validating input
    if (n <= 0) {
        cout << "Please enter a positive number!" << endl;
        return 1;
    }
    
    if (n < 2) {
        cout << "Please enter at least 2 for hollow effect!" << endl;
        return 1;
    }
    
    cout << "\nHollow Square Pattern:" << endl;
    
    // Outer loop for rows
    for (int i = 1; i <= n; i++) {
        // Inner loop for columns
        for (int j = 1; j <= n; j++) {
            // Print star if it's at border (first/last row or first/last column)
            if (i == 1 || i == n || j == 1 || j == n) {
                cout << "*";
            } else {
                // Print space for hollow inside
                cout << " ";
            }
        }
        cout << endl;  // Move to next line after each row
    }
    
    return 0;
}
