// Check if a Matrix is Symmetric
// A matrix is symmetric if A[i][j] == A[j][i] for all i, j

#include <iostream>
using namespace std;

int main() {
    int matrix[3][3];
    bool isSymmetric = true;

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

    // Checking symmetry
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (matrix[i][j] != matrix[j][i]) {
                isSymmetric = false;
                break;
            }
        }
        if (!isSymmetric) {
            break;
        }
    }

    if (isSymmetric) {
        cout << "\nThe matrix is symmetric" << endl;
    } else {
        cout << "\nThe matrix is not symmetric" << endl;
    }

    return 0;
}
