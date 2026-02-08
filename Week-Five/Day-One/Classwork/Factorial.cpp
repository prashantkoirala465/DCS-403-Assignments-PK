// This program calculates the factorial of a number using recursion.

#include <iostream>
using namespace std;
int factorial (int n) {
    if (n==0)
    return 1;
    else
    return n*factorial(n-1);
}
int main(){
    int number;
    cout<<"Enter a positive integer: ";
    cin>>number;
    if (number < 0) {
        cout << "Factorial is not defined for negative numbers. Positive integer rakhnu hos." << endl;
    } else {
        cout << "Factorial of " << number << " = " << factorial (number) << endl;
    }
    return 0;
    
}