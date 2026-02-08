
// Use **tail recursion** to compute `a^b`.
#include <iostream>
using namespace std;

int power(int a, int b, int result) {
    if (b == 0) {          // Base case
        return result;
    }
    return power(a, b - 1, result * a); // Tail recursion
}

int main() {
    int a, b;

    cout << "Enter base: ";
    cin >> a;

    cout << "Enter exponent: ";
    cin >> b;

    cout << "Result: " << power(a, b, 1);
    cout << endl;

    return 0;
}
