// Constant Reference Parameters
// Using const with references to prevent modification

#include <iostream>
#include <string>
using namespace std;

// Function with constant reference parameter
// const prevents modification, & avoids copying (efficient for large data)
void display(const string &msg) {
    cout << "Message: " << msg << endl;
    
    // The following would cause a compilation error:
    // msg = "Changed!";  // Error: cannot modify const parameter
}

// For comparison: function that passes by value (makes a copy)
void displayByValue(string msg) {
    cout << "Message (by value): " << msg << endl;
}

int main() {
    string userMessage;
    
    cout << "Enter a message: ";
    getline(cin, userMessage);  // Read entire line including spaces
    
    cout << "\nUsing const reference:" << endl;
    display(userMessage);
    
    cout << "\nUsing pass by value:" << endl;
    displayByValue(userMessage);
    
    cout << "\nOriginal message unchanged: " << userMessage << endl;
    
    cout << "\nKey Benefits of const reference:" << endl;
    cout << "1. No copying (efficient for large objects)" << endl;
    cout << "2. Prevents accidental modification" << endl;
    cout << "3. Best practice for read-only parameters" << endl;
    
    return 0;
}
