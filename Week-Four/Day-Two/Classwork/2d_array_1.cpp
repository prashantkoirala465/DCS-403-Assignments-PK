//Passing a 2D array into a function

#include <iostream>
using namespace std;

void printMatrix(const int m[][4], int rows) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < 4; j++)
            cout << m[i][j] << " ";
        cout << endl;
    }
}

int main() {
    int matrix[3][4] = {{1,2,3,4}, {5,6,7,8}, {9,10,11,12}};
    printMatrix(matrix, 3);
}
