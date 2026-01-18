#include <iostream>

using namespace std;
int main() {
    char hexaDigit;
    int decimalValue;
    cout << "Enter a hexadecimal digit (0-9, A-F): ";
    cin >> hexaDigit;
    if (hexaDigit >= '0' && hexaDigit <= '9') {
        decimalValue = hexaDigit - '0';  
        cout << "Decimal value is: " << decimalValue << endl;
    } else if (hexaDigit >= 'A' && hexaDigit <= 'F') {
        decimalValue = 10 + (hexaDigit - 'A');  
        cout << "Decimal value is: " << decimalValue << endl;
    } else {
        cout << "Invalid hexadecimal digit!" << endl;
        return 1;  
    }
}
