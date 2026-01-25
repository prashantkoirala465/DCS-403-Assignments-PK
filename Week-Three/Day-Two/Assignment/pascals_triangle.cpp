// Pascal's Triangle Pattern
// Formula: C(n, k) = n! / (k! * (n-k)!)

#include <iostream>
using namespace std;

// Function to calculate factorial
long long factorial(int n) {
    long long result = 1;
    for (int i = 2; i <= n; i++) {
        result *= i;
    }
    return result;
}

// Function to calculate combination (nCr)
int combination(int n, int r) {
    return factorial(n) / (factorial(r) * factorial(n - r));
}

int main() {
    int n;
    
    // Taking input from user
    cout << "Enter the number of rows for Pascal's Triangle: ";
    cin >> n;
    
    // Validating input
    if (n <= 0) {
        cout << "Please enter a positive number!" << endl;
        return 1;
    }
    
    cout << "\nPascal's Triangle:" << endl;
    
    // Outer loop for rows
    for (int i = 0; i < n; i++) {
        // Print leading spaces for pyramid shape
        for (int space = 0; space < n - i; space++) {
            cout << " ";
        }
        
        // Print combination values for current row
        for (int j = 0; j <= i; j++) {
            cout << combination(i, j) << " ";
        }
        
        cout << endl;  // Move to next line after each row
    }
    
    cout << "\nNote: Each number is the sum of two numbers above it." << endl;
    cout << "Formula used: C(n,k) = n! / (k! * (n-k)!)" << endl;
    
    return 0;
}
