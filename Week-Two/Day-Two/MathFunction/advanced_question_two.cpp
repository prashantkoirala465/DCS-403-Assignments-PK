//Write a program to find the distance between two points \((x_1, y_1)\) and \((x_2, y_2)\).

#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double x1, y1, x2, y2;
    cout << "Enter x1 y1 x2 y2: ";
    cin >> x1 >> y1 >> x2 >> y2;

    double distance = sqrt(pow(x2-x1, 2) + pow(y2-y1, 2));
    cout << "Distance between points is: " << distance << endl;

    return 0;
}
