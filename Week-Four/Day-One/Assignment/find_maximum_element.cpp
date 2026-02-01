// Find the Maximum Element in an Array

#include <iostream>
using namespace std;

int main() {
    int n;

    cout << "Enter number of elements: ";
    cin >> n;

    int arr[n];

    cout << "Enter " << n << " elements:" << endl;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Assume first element is maximum
    int max = arr[0];

    // Compare with rest of the elements
    for (int i = 1; i < n; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }

    cout << "\nMaximum element: " << max << endl;

    return 0;
}
