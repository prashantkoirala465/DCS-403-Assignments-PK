// Number Triangle Pattern

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
    
    cout << "\nNumber Triangle:" << endl;
    
    // Outer loop for rows
    for (int i = 1; i <= n; i++) {
        // Inner loop for columns (prints numbers from 1 to i)
        for (int j = 1; j <= i; j++) {
            cout << j;
        }
        cout << endl;  // Move to next line after each row
    }
    
    return 0;
}
