// Sum of All Elements in a 2x3 Array

#include <iostream>
using namespace std;

int main() {
    int matrix[2][3];
    int sum = 0;

    cout << "Enter 6 elements for a 2x3 matrix:" << endl;

    // Taking input and calculating sum
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            cin >> matrix[i][j];
            sum += matrix[i][j];
        }
    }

    // Displaying matrix
    cout << "\nMatrix:" << endl;
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    cout << "\nSum of all elements: " << sum << endl;

    return 0;
}
