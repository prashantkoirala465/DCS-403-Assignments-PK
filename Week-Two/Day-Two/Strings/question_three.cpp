// Write a program to check if a string is a palindrome.

#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    string str;
    cout << "Enter a string: ";
    getline(cin, str);

    string revStr = str;
    reverse(revStr.begin(), revStr.end());

    if (str == revStr)
        cout << "The string is a palindrome." << endl;
    else
        cout << "The string is not a palindrome." << endl;

    return 0;
}
