// Void Functions - functions that don't return a value

#include <iostream>
using namespace std;

// Void function - does not return any value
void greet() {
    cout << "Hello, welcome to C++ functions!" << endl;
    cout << "Void functions perform actions but don't return values." << endl;
}

int main() {
    // Calling the void function
    greet();
    
    // We can call it multiple times
    cout << "\nCalling greet() again:" << endl;
    greet();
    
    return 0;
}
