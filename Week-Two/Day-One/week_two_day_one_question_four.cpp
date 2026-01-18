#include <iostream>

using namespace std;
int main() {
    int number;
    cout << "Enter any number: ";
    cin >> number;
    if (number > 0) {
        if (number % 2 == 0) {
            cout << "The given number is positive and even." << endl;
        } else {
            cout << "The given number is positive and odd." << endl;
        }
    } else if (number < 0) {
        cout << "The given number is negative." << endl;
    } else {
        cout << "The given number is zero." << endl;
    }
    return 0;
}
