//Preventing modification of array arguments in function

#include <iostream>
using namespace std;

void displayArray(const int arr[], int size) {
    for (int i = 0; i < size; i++)
        cout << arr[i] << " ";
    // arr[0] = 100;        // Error: modification not allowed
}

int main() {
    int values[] = {10, 20, 30};
    displayArray(values, 3);
}
