// Sum of Elements Using a Function

#include <iostream>
using namespace std;

// Function to calculate sum of array elements
int sumArray(int arr[], int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += arr[i];
    }
    return sum;
}

int main() {
    int n;

    cout << "Enter number of elements: ";
    cin >> n;

    int arr[n];

    cout << "Enter " << n << " elements:" << endl;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Calling function to get sum
    int total = sumArray(arr, n);

    cout << "\nSum of all elements: " << total << endl;

    return 0;
}
