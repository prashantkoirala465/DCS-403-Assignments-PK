// Floyd's Triangle Pattern using nested for loops

#include <iostream>
using namespace std;

int main() {
    int rows, counter = 1;
    
    // Taking input from user
    cout << "Enter number of rows for Floyd's Triangle: ";
    cin >> rows;
    
    // Validating input
    if (rows <= 0) {
        cout << "Please enter a positive number!" << endl;
        return 1;
    }
    
    cout << "\nFloyd's Triangle:" << endl;
    
    // Outer loop for rows
    for (int i = 1; i <= rows; i++) {
        // Inner loop for columns (printing numbers)
        for (int j = 1; j <= i; j++) {
            cout << counter << " ";  // Print current number
            counter++;               // Increment counter for next number
        }
        cout << endl;  // Move to next line after each row
    }
    
    return 0;
}
