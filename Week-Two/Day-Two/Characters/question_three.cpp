// Write a program to count the number of vowels and consonants in a given string.

#include <iostream>
#include <cctype>
using namespace std;

int main() {
    string str;
    cout << "Enter a string: ";
    getline(cin, str); // allows spaces

    int vowels = 0, consonants = 0;
    for (char ch : str) {
        if (isalpha(ch)) {
            char lower = tolower(ch);
            if (lower=='a'||lower=='e'||lower=='i'||lower=='o'||lower=='u')
                vowels++;
            else
                consonants++;
        }
    }

    cout << "Vowels: " << vowels << endl;
    cout << "Consonants: " << consonants << endl;

    return 0;
}
