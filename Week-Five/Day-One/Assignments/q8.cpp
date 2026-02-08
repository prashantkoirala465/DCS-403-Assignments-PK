// Reverse a given string using recursion.

#include <iostream>
using namespace std;

void reverseString(string &s, int index) {
    if (index < 0) {          
        return;
    }
    cout << s[index];        
    reverseString(s, index - 1); 
}

int main() {
    string s;
    cout << "Enter a string: ";
    cin >> s;

    cout << "Reversed string is: ";
    reverseString(s, s.length() - 1); 
    cout << endl;
    return 0;
}
