#include <iostream>
using namespace std;

int main() {
    int n, sum = 0;
    int i = 1;
    cout << "Enter a positive integer: ";
    cin >> n;

    if (n > 0) {
        do {
            sum += i;   
            i++;        
        } 
        while (i <= n); 
        
        cout << "The sum from 1 up to " << n << " is: " << sum << endl;
    } 
    else {
        cout << "Please enter a positive number." << endl;
    }

    return 0;
}
