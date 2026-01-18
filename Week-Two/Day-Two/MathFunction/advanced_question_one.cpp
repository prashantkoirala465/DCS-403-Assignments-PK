//Write a program to calculate the roots of a quadratic equation

#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double a, b, c;
    cout << "Enter coefficients of a, b, c: ";
    cin >> a >> b >> c;

    double D = b*b - 4*a*c;

    if (D > 0) {
        double x1 = (-b + sqrt(D)) / (2*a);
        double x2 = (-b - sqrt(D)) / (2*a);
        cout << "Roots are real and distinct: " << x1 << " and " << x2 << endl;
    } else if (D == 0) {
        double x = -b / (2*a);
        cout << "Roots are real and equal: " << x << endl;
    } else {
        double realPart = -b / (2*a);
        double imagPart = sqrt(-D) / (2*a);
        cout << "Roots are imaginary: " << realPart << " + " << imagPart << "i and "
             << realPart << " - " << imagPart << "i" << endl;
    }

    return 0;
}
