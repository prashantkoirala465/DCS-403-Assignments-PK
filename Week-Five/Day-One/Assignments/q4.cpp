// Print each element of an array recursively.

#include <iostream>
using namespace std;

void printArray(int arr[], int size, int index) {
    if (index == size) {   // Base case
        return;
    }
    cout << arr[index] << " ";
    printArray(arr, size, index + 1);
}

int main() {
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;

    int arr[50];
    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "The elements are: " << "\n";
    printArray(arr, n, 0);

    cout << endl;

    return 0;
}
