// Binary Search
// Efficient searching on sorted arrays by dividing search space in half

#include <iostream>
using namespace std;

int main() {
    int n, target;

    cout << "Enter number of elements: ";
    cin >> n;

    int arr[n];

    cout << "Enter " << n << " elements in sorted order:" << endl;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "Enter element to search: ";
    cin >> target;

    // Binary search
    int low = 0;
    int high = n - 1;
    int position = -1;

    while (low <= high) {
        int mid = (low + high) / 2;

        if (arr[mid] == target) {
            position = mid;
            break;
        } else if (arr[mid] < target) {
            low = mid + 1;  // Search in right half
        } else {
            high = mid - 1;  // Search in left half
        }
    }

    if (position != -1) {
        cout << "\nElement " << target << " found at index " << position << endl;
    } else {
        cout << "\nElement " << target << " not found in the array" << endl;
    }

    return 0;
}
