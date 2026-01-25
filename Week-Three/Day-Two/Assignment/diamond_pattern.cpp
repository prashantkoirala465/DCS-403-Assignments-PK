// Diamond Pattern

#include <iostream>
using namespace std;

int main() {
    int n;
    
    // Taking input from user
    cout << "Enter the number of rows for half diamond: ";
    cin >> n;
    
    // Validating input
    if (n <= 0) {
        cout << "Please enter a positive number!" << endl;
        return 1;
    }
    
    cout << "\nDiamond Pattern:" << endl;
    
    // Upper half of diamond (including middle)
    for (int i = 1; i <= n; i++) {
        // Print leading spaces
        for (int j = 1; j <= n - i; j++) {
            cout << " ";
        }
        
        // Print stars
        for (int k = 1; k <= 2 * i - 1; k++) {
            cout << "*";
        }
        
        cout << endl;
    }
    
    // Lower half of diamond
    for (int i = n - 1; i >= 1; i--) {
        // Print leading spaces
        for (int j = 1; j <= n - i; j++) {
            cout << " ";
        }
        
        // Print stars
        for (int k = 1; k <= 2 * i - 1; k++) {
            cout << "*";
        }
        
        cout << endl;
    }
    
    return 0;
}
