// Matrix Multiplication (2x3 × 3x2)
// Result will be 2x2

#include <iostream>
using namespace std;

int main() {
    int matrixA[2][3], matrixB[3][2], result[2][2];

    cout << "Enter 6 elements for Matrix A (2x3):" << endl;
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            cin >> matrixA[i][j];
        }
    }

    cout << "\nEnter 6 elements for Matrix B (3x2):" << endl;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 2; j++) {
            cin >> matrixB[i][j];
        }
    }

    // Matrix multiplication
    // Row of A × Column of B
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            result[i][j] = 0;
            for (int k = 0; k < 3; k++) {
                result[i][j] += matrixA[i][k] * matrixB[k][j];
            }
        }
    }

    // Displaying results
    cout << "\nMatrix A (2x3):" << endl;
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            cout << matrixA[i][j] << " ";
        }
        cout << endl;
    }

    cout << "\nMatrix B (3x2):" << endl;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 2; j++) {
            cout << matrixB[i][j] << " ";
        }
        cout << endl;
    }

    cout << "\nResult (A × B) (2x2):" << endl;
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            cout << result[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
