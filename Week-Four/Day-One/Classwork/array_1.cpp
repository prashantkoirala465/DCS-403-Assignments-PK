//Passing an array as a function parameter

#include <iostream>
using namespace std;

void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++)
        cout << arr[i] << " ";
}

int main() {
    int nums[] = {3, 6, 9};
    printArray(nums, 3);
}
