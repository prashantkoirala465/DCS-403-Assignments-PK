// Passing a 2D Array to a Function

#include <iostream>
using namespace std;

// Function to print 3x3 matrix
void printMatrix(int arr[][3]) {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}

int main() {
    int matrix[3][3];

    cout << "Enter 9 elements for a 3x3 matrix:" << endl;

    // Taking input
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cin >> matrix[i][j];
        }
    }

    // Calling function to print matrix
    cout << "\nMatrix:" << endl;
    printMatrix(matrix);

    return 0;
}
