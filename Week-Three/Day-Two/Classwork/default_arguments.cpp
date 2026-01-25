// Default Arguments
// Function with default parameter values

#include <iostream>
#include <cmath>
using namespace std;

// Function with default argument (exponent defaults to 2)
double power(int base, int exponent = 2) {
    return pow(base, exponent);
}

int main() {
    int base, exponent;
    char choice;
    
    cout << "Enter base number: ";
    cin >> base;
    
    cout << "Do you want to specify exponent? (y/n): ";
    cin >> choice;
    
    if (choice == 'y' || choice == 'Y') {
        cout << "Enter exponent: ";
        cin >> exponent;
        cout << base << " raised to power " << exponent << " = " << power(base, exponent) << endl;
    } else {
        // Using default exponent (2)
        cout << base << " raised to power 2 (default) = " << power(base) << endl;
    }
    
    cout << "\nNote: When exponent is not provided, it defaults to 2." << endl;
    
    return 0;
}
