// Random number generating (using srand give random numbers)

#include <iostream>
#include <cstdlib>
using namespace std;
int main() {

       srand(time(0));
int number = rand() % 10;

cout << "Generated random number is: " << number << endl;
return 0;

}
