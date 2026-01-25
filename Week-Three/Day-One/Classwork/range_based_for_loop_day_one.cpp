#include <iostream>
using namespace std;

int main() {
    int numbers[] = {1, 2, 3, 4, 5};
    int sum = 0;
    for (int x : numbers) {
        sum += x;
    }

    cout << "The sum of the array is: " << sum << endl;

    return 0;
}
