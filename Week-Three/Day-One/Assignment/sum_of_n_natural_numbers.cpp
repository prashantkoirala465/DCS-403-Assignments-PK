// Sum of First N Natural Numbers using for loop

#include <iostream>
using namespace std;

int main() {
    int n, sum = 0;
    
    // Taking input from user
    cout << "Enter a positive integer: ";
    cin >> n;
    
    // Validating input
    if (n <= 0) {
        cout << "Please enter a positive integer!" << endl;
        return 1;
    }
    
    // Calculating sum using for loop
    for (int i = 1; i <= n; i++) {
        sum += i;  // Accumulating the sum
    }
    
    // Displaying the result
    cout << "Sum of first " << n << " natural numbers is: " << sum << endl;
    
    return 0;
}
