// Print Multiplication Table using do-while loop

#include <iostream>
using namespace std;

int main() {
    int number, counter = 1;
    
    // Taking input from user
    cout << "Enter a number to print its multiplication table: ";
    cin >> number;
    
    cout << "\nMultiplication Table of " << number << ":" << endl;
    cout << "--------------------------------" << endl;
    
    // Using do-while loop to print multiplication table
    do {
        cout << number << " x " << counter << " = " << (number * counter) << endl;
        counter++;  // Incrementing counter
    } while (counter <= 10);
    
    return 0;
}
