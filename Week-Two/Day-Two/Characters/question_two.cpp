// Write a program to convert lowercase letters to uppercase and vice versa.

#include <iostream>
#include <cctype> // for toupper() and tolower()
using namespace std;

int main() {
    char ch;
    cout << "Enter a character: ";
    cin >> ch;

    if (islower(ch)) {  // check if it's lowercase
        ch = toupper(ch);  // convert to uppercase
        cout << "Converted to uppercase: " << ch << endl;
    } else {
        cout << "No conversion needed." << endl;
    }

    return 0;
}


