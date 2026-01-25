// Function Overloading
// Same function name with different parameter lists

#include <iostream>
using namespace std;

// Constant for PI
const double PI = 3.14159;

// Function to calculate area of circle (one parameter)
double area(double radius) {
    return PI * radius * radius;
}

// Function to calculate area of rectangle (two parameters)
// This is function overloading - same name, different parameters
double area(double length, double width) {
    return length * width;
}

int main() {
    double radius, length, width;
    
    // Calculating area of circle
    cout << "Enter radius of circle: ";
    cin >> radius;
    cout << "Area of circle: " << area(radius) << " square units" << endl;
    
    // Calculating area of rectangle
    cout << "\nEnter length of rectangle: ";
    cin >> length;
    cout << "Enter width of rectangle: ";
    cin >> width;
    cout << "Area of rectangle: " << area(length, width) << " square units" << endl;
    
    cout << "\nNote: Same function name 'area()' works for both!" << endl;
    cout << "This is called Function Overloading." << endl;
    
    return 0;
}
