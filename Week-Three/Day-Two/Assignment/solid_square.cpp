// Solid Square of Stars Pattern

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
    
    cout << "\nSolid Square Pattern:" << endl;
    
    // Outer loop for rows
    for (int i = 1; i <= n; i++) {
        // Inner loop for columns
        for (int j = 1; j <= n; j++) {
            cout << "*";
        }
        cout << endl;  // Move to next line after each row
    }
    
    return 0;
}
