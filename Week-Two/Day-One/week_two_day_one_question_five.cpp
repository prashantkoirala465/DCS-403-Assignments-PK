#include <iostream>

using namespace std;

int main() {
    int a, b;

    cout << "Enter first number: ";
    cin >> a;

    cout << "Enter second number: ";
    cin >> b;

    // Using ternary operator to find the smaller number
    int smaller = (a < b) ? a : b;

    cout << "The smaller number is: " << smaller << endl;

    return 0;
}
