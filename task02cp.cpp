#include <iostream>
#include <string>
using namespace std;

int calculateRotations(string directions[], int n) {
    int totalDegrees = 0;

    // Calculate total degrees based on directions
    for (int i = 0; i < n; i++) {
        if (directions[i] == "right") {
            totalDegrees += 90;
        } else if (directions[i] == "left") {
            totalDegrees -= 90;
        }
    }

    // Calculate full rotations (360°)
    return totalDegrees / 360;
}

int main() {
    int n;
    cout << "Enter the number of directions: ";
    cin >> n;

    if (n <= 0) {
        cout << "Invalid input." << endl;
        return 0;
    }

    string directions[100]; // Assuming a maximum of 100 directions
    cout << "Enter the directions (left or right): ";
    for (int i = 0; i < n; i++) {
        cin >> directions[i];
    }

    int fullRotations = calculateRotations(directions, n);
    cout << "Full 360 rotations made: " << fullRotations << endl;

    return 0;
}
