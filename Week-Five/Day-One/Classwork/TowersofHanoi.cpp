// Tower of Hanoi problem using recursion

#include <iostream>
using namespace std;

void hanoi(int n, char from, char to, char help) {
    if (n == 1) {  // Base case: only 1 disk
        cout << "Move disk 1 from " << from << " to " << to << endl;
        return;
    }
    hanoi(n - 1, from, help, to);          
    cout << "Move disk " << n << " from " << from << " to " << to << endl; 
    hanoi(n - 1, help, to, from);   
}

int main() {
    int disks = 3;      
    hanoi(disks, 'A', 'C', 'B'); // A = source, C = target, B = helper
    return 0;
}
