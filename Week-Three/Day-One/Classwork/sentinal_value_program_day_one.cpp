#include <iostream>
using namespace std;

int main() {
    int num;
    int sum = 0, count = 0;

    cout << "Enter numbers (-1 to stop): ";

    while (true) {
        cin >> num;

        if (num == -1) break;  // sentinel value

        sum += num;
        count++;
    }

    if (count == 0) {
        cout << "No numbers were entered." << endl;
    } else {
        cout << "Sum = " << sum << endl;
        cout << "Average = " << (double)sum / count << endl;
    }

    return 0;
}
