// Print Row-wise and Column-wise Sums

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

    // Calculate and display row sums
    cout << "\nRow sums:" << endl;
    for (int i = 0; i < 3; i++) {
        int rowSum = 0;
        for (int j = 0; j < 3; j++) {
            rowSum += matrix[i][j];
        }
        cout << "Row " << (i + 1) << ": " << rowSum << endl;
    }

    // Calculate and display column sums
    cout << "\nColumn sums:" << endl;
    for (int j = 0; j < 3; j++) {
        int colSum = 0;
        for (int i = 0; i < 3; i++) {
            colSum += matrix[i][j];
        }
        cout << "Column " << (j + 1) << ": " << colSum << endl;
    }

    return 0;
}
