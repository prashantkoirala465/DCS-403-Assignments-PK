// Find and print the longest word from a sentence.

#include <iostream>
#include <sstream>
using namespace std;

int main() {
    string sentence;
    cout << "Enter a sentence: ";
    getline(cin, sentence);

    stringstream ss(sentence);
    string word, longest = "";

    while (ss >> word) {
        if (word.length() > longest.length())
            longest = word;
    }

    cout << "Longest word: " << longest << endl;
    return 0;
}
