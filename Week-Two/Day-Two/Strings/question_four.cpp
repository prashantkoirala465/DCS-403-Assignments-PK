// Write a program to concatenate two strings.

#include <iostream>
using namespace std;

int main() {
    string str1, str2;
    cout << "Enter first string: ";
    getline(cin, str1);
    cout << "Enter second string: ";
    getline(cin, str2);

    cout << "Concatenated String: " << str1 + " " + str2 << endl;

    return 0;
}
