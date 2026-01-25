#include <iostream>

using namespace std;

int main() {
    int n, 
    sum = 0;
    int i = 1; 

    cout << "Enter a positive integer: ";
    cin >> n;

    
    while (i <= n) {
        sum = sum + i; 
        i++;           
    }

    cout << "The sum from 1 up to " << n << " is: " << sum << endl;

    return 0;
}
