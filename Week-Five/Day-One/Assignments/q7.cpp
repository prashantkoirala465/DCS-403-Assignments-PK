// Rewrite Fibonacci using **tail recursion**.

#include <iostream>
using namespace std;

int fibTail(int n, int a, int b) {
    if (n == 0) {          // Base case
        return a;
    }
    return fibTail(n - 1, b, a + b); // Tail recursion
}

int main() {
    int n;
    cout << "Enter n: ";
    cin >> n;

    cout << "The " << n << "th Fibonacci number is: " << fibTail(n, 0, 1);
    cout << endl;
    return 0;
}
