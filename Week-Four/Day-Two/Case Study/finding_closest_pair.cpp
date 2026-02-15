// Finding the Closest Pair
// Given a list of points, find two with the smallest distance apart

#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int n;

    cout << "Enter number of points: ";
    cin >> n;

    if (n < 2) {
        cout << "Need at least 2 points!" << endl;
        return 1;
    }

    // Store all points in 2D array (each row is a point with x, y coordinates)
    double points[n][2];

    cout << "Enter " << n << " points (x y):" << endl;
    for (int i = 0; i < n; i++) {
        cout << "Point " << (i + 1) << ": ";
        cin >> points[i][0] >> points[i][1];  // x and y coordinates
    }

    // Find the closest pair by comparing every pair
    double minDistance = 1e9;  // Large initial value
    int point1 = 0, point2 = 1;

    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            // Calculate distance using distance formula: sqrt((x2-x1)^2 + (y2-y1)^2)
            double dx = points[j][0] - points[i][0];
            double dy = points[j][1] - points[i][1];
            double distance = sqrt(dx * dx + dy * dy);

            // Update minimum if this distance is smaller
            if (distance < minDistance) {
                minDistance = distance;
                point1 = i;
                point2 = j;
            }
        }
    }

    // Display results
    cout << "\n=== Closest Pair ===" << endl;
    cout << "Point " << (point1 + 1) << ": (" << points[point1][0] << ", " << points[point1][1] << ")" << endl;
    cout << "Point " << (point2 + 1) << ": (" << points[point2][0] << ", " << points[point2][1] << ")" << endl;
    cout << "Distance: " << minDistance << endl;

    return 0;
}
