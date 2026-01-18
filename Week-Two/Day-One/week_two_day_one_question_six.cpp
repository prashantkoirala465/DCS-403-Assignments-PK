// Q6 Write a C++ program that prints the name of the day of the week based on a number entered by the user (1–7).
// using a switch case
#include <iostream>
using namespace std;

int main() {
    int day;

    cout << "Enter a number (1-7) for the day of the week: ";
    cin >> day;

    switch(day) {
        case 1:
            cout << "Sunday" << endl;
            break;
        case 2:
            cout << "Monday" << endl;
            break;
        case 3:
            cout << "Tuesday" << endl;
            break;
        case 4:
            cout << "Wednesday" << endl;
            break;
        case 5:
            cout << "Thursday" << endl;
            break;
        case 6:
            cout << "Friday" << endl;
            break;
        case 7:
            cout << "Saturday" << endl;
            break;
        default:
            cout << "Invalid input! Please enter a number between 1 and 7." << endl;
    }

    return 0;
}