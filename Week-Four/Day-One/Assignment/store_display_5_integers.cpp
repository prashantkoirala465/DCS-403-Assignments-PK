// Store and Display 5 Integers

#include <iostream>
using namespace std;

int main() {
    int arr[5];

    cout << "Enter 5 integers:" << endl;

    // Taking input
    for (int i = 0; i < 5; i++) {
        cout << "Element " << (i + 1) << ": ";
        cin >> arr[i];
    }

    // Displaying output
    cout << "\nYou entered: ";
    for (int i = 0; i < 5; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
