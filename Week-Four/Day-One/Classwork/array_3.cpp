//Returning array from function

#include <iostream>
using namespace std;

int* createArray(int size) {
    int* arr = new int[size];
    for (int i = 0; i < size; i++)
        arr[i] = i * 2;
    return arr;
}

int main() {
    int* myArr = createArray(5);
    for (int i = 0; i < 5; i++)
        cout << myArr[i] << " ";
    delete[] myArr;
}

// Dynamic allocation (new) ensures the array persists after function exit.
// Must be manually deleted with delete[] to avoid memory leaks.
