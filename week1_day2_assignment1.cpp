#include <iostream>
using namespace std;

int main() {
    int baseSalary;
    const double bonusPercentage = 15.0;
    cout << "Base Salary: ";
    cin >> baseSalary;
    double bonusAmount = baseSalary * (bonusPercentage / 100.0);
    double totalSalary = baseSalary + bonusAmount;
    cout << "Total Salary: " << totalSalary << endl;

    return 0;
}
