// Static, Global, and Static Local Variables
// Demonstrates variable scope and lifetime

#include <iostream>
using namespace std;

// Global variable - accessible from anywhere in the file
int globalVar = 100;

// Function to demonstrate static local variable
void demonstrateStatic() {
    // Static local variable - retains value between function calls
    static int staticVar = 0;
    
    // Regular local variable - reinitialized each time
    int localVar = 0;
    
    staticVar++;
    localVar++;
    
    cout << "Static variable: " << staticVar << " | Local variable: " << localVar << endl;
}

int main() {
    cout << "=== Variable Types Demonstration ===" << endl;
    
    // Global variable access
    cout << "\n1. Global Variable:" << endl;
    cout << "Initial value of globalVar: " << globalVar << endl;
    globalVar = 200;
    cout << "Modified globalVar: " << globalVar << endl;
    
    // Local variable
    cout << "\n2. Local Variable:" << endl;
    int localInMain = 50;
    cout << "Local variable in main: " << localInMain << endl;
    
    // Static local variable demonstration
    cout << "\n3. Static Local Variable (retains value between calls):" << endl;
    cout << "Calling function 3 times:" << endl;
    demonstrateStatic();  // staticVar = 1, localVar = 1
    demonstrateStatic();  // staticVar = 2, localVar = 1
    demonstrateStatic();  // staticVar = 3, localVar = 1
    
    cout << "\nKey Differences:" << endl;
    cout << "- Global: Accessible everywhere, exists throughout program" << endl;
    cout << "- Local: Only in its scope, destroyed when scope ends" << endl;
    cout << "- Static Local: Retains value between function calls" << endl;
    
    return 0;
}
