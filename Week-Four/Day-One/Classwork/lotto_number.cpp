#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    srand(time(0));
    const int SIZE = 6;
    int lotto[SIZE];

    for (int i = 0; i < SIZE; i++) {
        int num;
        bool duplicate;
        do {
            num = rand() % 50 + 1;
            duplicate = false;
            for (int j = 0; j < i; j++)
                if (lotto[j] == num) duplicate = true;
        } while (duplicate);
        lotto[i] = num;
    }

    cout << "Lotto numbers: ";
    for (int n : lotto) cout << n << " ";
}
