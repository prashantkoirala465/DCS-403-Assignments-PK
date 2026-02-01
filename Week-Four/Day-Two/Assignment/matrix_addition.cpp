// Matrix Addition
// Add two 2x2 matrices

#include <iostream>
using namespace std;

int main() {
    int matrixA[2][2], matrixB[2][2], result[2][2];

    cout << "Enter 4 elements for Matrix A (2x2):" << endl;
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            cin >> matrixA[i][j];
        }
    }

    cout << "\nEnter 4 elements for Matrix B (2x2):" << endl;
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            cin >> matrixB[i][j];
        }
    }

    // Adding matrices
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            result[i][j] = matrixA[i][j] + matrixB[i][j];
        }
    }

    // Displaying results
    cout << "\nMatrix A:" << endl;
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            cout << matrixA[i][j] << " ";
        }
        cout << endl;
    }

    cout << "\nMatrix B:" << endl;
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            cout << matrixB[i][j] << " ";
        }
        cout << endl;
    }

    cout << "\nResult (A + B):" << endl;
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            cout << result[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
