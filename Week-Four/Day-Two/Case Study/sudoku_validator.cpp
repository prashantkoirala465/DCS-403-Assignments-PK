// Sudoku Validator
// Verify if a Sudoku solution is valid using 2D arrays

#include <iostream>
using namespace std;

int main() {
    int grid[9][9];

    cout << "Enter 81 numbers for 9x9 Sudoku grid (row by row):" << endl;

    // Taking input
    for (int i = 0; i < 9; i++) {
        for (int j = 0; j < 9; j++) {
            cin >> grid[i][j];
        }
    }

    // Display the grid
    cout << "\nSudoku Grid:" << endl;
    for (int i = 0; i < 9; i++) {
        for (int j = 0; j < 9; j++) {
            cout << grid[i][j] << " ";
            if (j == 2 || j == 5) cout << "| ";
        }
        cout << endl;
        if (i == 2 || i == 5) cout << "------+-------+------" << endl;
    }

    bool isValid = true;

    // Check each row (should have digits 1-9 with no repetition)
    for (int i = 0; i < 9; i++) {
        bool seen[10] = {false};  // Track which digits are seen
        for (int j = 0; j < 9; j++) {
            int num = grid[i][j];
            if (num < 1 || num > 9 || seen[num]) {
                isValid = false;
                cout << "\nInvalid: Row " << (i + 1) << " has duplicate or invalid number!" << endl;
                break;
            }
            seen[num] = true;
        }
        if (!isValid) break;
    }

    // Check each column (should have digits 1-9 with no repetition)
    if (isValid) {
        for (int j = 0; j < 9; j++) {
            bool seen[10] = {false};
            for (int i = 0; i < 9; i++) {
                int num = grid[i][j];
                if (num < 1 || num > 9 || seen[num]) {
                    isValid = false;
                    cout << "\nInvalid: Column " << (j + 1) << " has duplicate or invalid number!" << endl;
                    break;
                }
                seen[num] = true;
            }
            if (!isValid) break;
        }
    }

    // Check each 3x3 subgrid (should have digits 1-9 with no repetition)
    if (isValid) {
        for (int boxRow = 0; boxRow < 3; boxRow++) {
            for (int boxCol = 0; boxCol < 3; boxCol++) {
                bool seen[10] = {false};

                // Check the 3x3 box starting at (boxRow*3, boxCol*3)
                for (int i = 0; i < 3; i++) {
                    for (int j = 0; j < 3; j++) {
                        int num = grid[boxRow * 3 + i][boxCol * 3 + j];
                        if (num < 1 || num > 9 || seen[num]) {
                            isValid = false;
                            cout << "\nInvalid: 3x3 box at position (" << (boxRow + 1) << "," << (boxCol + 1) << ") has duplicate!" << endl;
                            break;
                        }
                        seen[num] = true;
                    }
                    if (!isValid) break;
                }
                if (!isValid) break;
            }
            if (!isValid) break;
        }
    }

    if (isValid) {
        cout << "\n✓ Valid Sudoku solution!" << endl;
    } else {
        cout << "\n✗ Invalid Sudoku solution!" << endl;
    }

    return 0;
}
