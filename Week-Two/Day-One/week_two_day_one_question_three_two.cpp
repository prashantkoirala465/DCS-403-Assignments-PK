#include <iostream>

using namespace std;
int main() { 
    int marks, grade;

    cout << "Enter your marks: ";
    cin >> marks;

    grade = marks / 10;

    switch (grade) {
        case 10:
        case 9:
        case 8:
            cout << "Grade: A" << endl;
            break;
        case 7:
        case 6:
            cout << "Grade: B" << endl;
            break;
        case 5:
        case 4:
            cout << "Grade: C" << endl;
            break;
        default:
            if (marks >= 0 && marks < 40) {
                cout << "Grade: F" << endl;
            } else {
                cout << "Invalid marks entered." << endl;
            }
            break;
    }

    return 0;
}
