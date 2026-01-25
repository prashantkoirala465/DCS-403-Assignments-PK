// Half Pyramid Pattern using nested for loops

#include <iostream>
using namespace std;

int main() {
    int rows;
    
    // Taking input from user
    cout << "Enter number of rows: ";
    cin >> rows;
    
    // Validating input
    if (rows <= 0) {
        cout << "Please enter a positive number!" << endl;
        return 1;
    }
    
    cout << "\nHalf Pyramid Pattern:" << endl;
    
    // Outer loop for rows
    for (int i = 1; i <= rows; i++) {
        // Inner loop for columns (printing stars)
        for (int j = 1; j <= i; j++) {
            cout << "*";
        }
        cout << endl;  // Move to next line after each row
    }
    
    return 0;
}
