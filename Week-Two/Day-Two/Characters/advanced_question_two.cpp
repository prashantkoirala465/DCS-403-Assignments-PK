// Convert every alternate character in a string to uppercase, starting with lowercase.

#include <iostream>
#include <cctype>
using namespace std;

int main() {
    string str;
    cout << "Enter a string: ";
    getline(cin, str);

    for (int i = 0; i < str.length(); i++) {
        if (isalpha(str[i])) {
            if (i % 2 == 1) 
                str[i] = toupper(str[i]);
            else
                str[i] = tolower(str[i]);
        }
    }

    cout << str << endl;
    return 0;
}
