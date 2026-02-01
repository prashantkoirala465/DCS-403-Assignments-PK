// Find Largest Element in Each Row

#include <iostream>
using namespace std;

int main() {
    int matrix[3][3];

    cout << "Enter 9 elements for a 3x3 matrix:" << endl;

    // Taking input
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cin >> matrix[i][j];
        }
    }

    // Displaying matrix
    cout << "\nMatrix:" << endl;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    // Find and display largest element in each row
    cout << "\nLargest element in each row:" << endl;
    for (int i = 0; i < 3; i++) {
        int max = matrix[i][0];  // Assume first element is max
        for (int j = 1; j < 3; j++) {
            if (matrix[i][j] > max) {
                max = matrix[i][j];
            }
        }
        cout << "Row " << (i + 1) << ": " << max << endl;
    }

    return 0;
}
