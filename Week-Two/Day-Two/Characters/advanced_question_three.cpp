// Remove digits and special symbols from a string, keeping only letters.
#include <iostream>
#include <cctype>
using namespace std;

int main() {
    string str, result = "";
    cout << "Enter a string: ";
    getline(cin, str);

    for (char ch : str) {
        if (isalpha(ch))
            result += ch;
    }

    cout << result << endl;
    return 0;
}
