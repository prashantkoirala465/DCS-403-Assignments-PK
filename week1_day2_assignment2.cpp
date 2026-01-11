#include <iostream>
using namespace std;

int main() {
    double celsius;
    const double multiplier = 9.0;
    const double divisor = 5.0;
    const double offset = 32.0;
    cout << "Celsius: ";
    cin >> celsius;
    double fahrenheit = (celsius * multiplier / divisor) + offset;
    cout << "Fahrenheit: " << fahrenheit << endl;

    return 0;
}
