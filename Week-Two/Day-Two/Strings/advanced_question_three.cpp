// Check if two strings are anagrams (contain same characters in any order).

#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    string str1, str2;
    cout << "Enter first string: ";
    getline(cin, str1);
    cout << "Enter second string: ";
    getline(cin, str2);

    if (str1.length() != str2.length()) {
        cout << "Strings are not anagrams." << endl;
        return 0;
    }

    sort(str1.begin(), str1.end());
    sort(str2.begin(), str2.end());

    if (str1 == str2)
        cout << "Strings are anagrams." << endl;
    else
        cout << "Strings are not anagrams." << endl;

    return 0;
}
