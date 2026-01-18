 #include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    srand(time(0));          
    char ch = 'A' + rand() % 26;   
    cout << "Random uppercase letter: " << ch << endl;              
    return 0;
}
