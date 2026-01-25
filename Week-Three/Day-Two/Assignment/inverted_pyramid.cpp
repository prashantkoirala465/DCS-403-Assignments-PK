// Inverted Pyramid Pattern

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
    
    cout << "\nInverted Pyramid:" << endl;
    
    // Outer loop for rows
    for (int i = n; i >= 1; i--) {
        // Print leading spaces
        for (int j = 1; j <= n - i; j++) {
            cout << " ";
        }
        
        // Print stars (decreasing: 2*i - 1)
        for (int k = 1; k <= 2 * i - 1; k++) {
            cout << "*";
        }
        
        cout << endl;  // Move to next line after each row
    }
    
    return 0;
}
