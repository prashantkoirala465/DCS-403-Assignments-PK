#include <iostream>
#include <cstdlib>   
#include <ctime>

using namespace std;

int main() {
    int lottery[6];
    int count = 0;

    // Seed the random number generator with current time
    srand(time(0));

    cout << "Generating 6 unique lottery numbers (1-50):" << endl;

    while (count < 6) {
        // Generate random number between 1 and 50
        int num = (rand() % 50) + 1;
        bool isDuplicate = false;

        // Check if the number already exists in the array
        for (int i = 0; i < count; i++) {
            if (lottery[i] == num) {
                isDuplicate = true;
                break;
            }
        }

        // If not a duplicate, add it to the array
        if (!isDuplicate) {
            lottery[count] = num;
            count++;
        }
    }

    // Display the results
    for (int i = 0; i < 6; i++) {
        cout << lottery[i] << " ";
    }
    cout << endl;

    return 0;
}
