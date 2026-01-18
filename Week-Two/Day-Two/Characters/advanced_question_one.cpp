// Count how many times each alphabet appears in a string (ignore case).

#include <iostream>
#include <cctype>
using namespace std;

int main() {
    string str;
    cout << "Enter a string: ";
    getline(cin, str);

    int freq[26] = {0};

    for (char ch : str) {
        if (isalpha(ch)) {
            freq[tolower(ch) - 'a']++;
        }
    }

    for (int i = 0; i < 26; i++) {
        if (freq[i] > 0)
            cout << (char)(i+'a') << ":" << freq[i] << "  ";
    }
    cout << endl;

    return 0;
}
