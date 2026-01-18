#include <iostream>

using namespace std;
int main() {
    int number;

    cout << "Enter any number that you wish: ";
    cin >> number;

    if (number > 0) {
        cout << "The number is positive." << endl;
    } else {
        cout << "The number is not positive." << endl;
    }

    return 0;
}
