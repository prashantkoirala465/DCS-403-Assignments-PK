// Linear Search
// Searches for a number by checking each element sequentially

#include <iostream>
using namespace std;

int main() {
    int n, target;

    cout << "Enter number of elements: ";
    cin >> n;

    int arr[n];

    cout << "Enter " << n << " elements:" << endl;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "Enter element to search: ";
    cin >> target;

    // Linear search - check each element one by one
    int position = -1;
    for (int i = 0; i < n; i++) {
        if (arr[i] == target) {
            position = i;
            break;
        }
    }

    if (position != -1) {
        cout << "\nElement " << target << " found at index " << position << endl;
    } else {
        cout << "\nElement " << target << " not found in the array" << endl;
    }

    return 0;
}
