// Input and Display a 3x3 Matrix

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

    return 0;
}
