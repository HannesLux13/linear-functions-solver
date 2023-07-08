#include <iostream>

using namespace std;

int main() {
    double a, b;

    // Input coefficients
    cout << "Enter coefficient a: ";
    cin >> a;
    cout << "Enter coefficient b: ";
    cin >> b;

    // Solve the equation
    if (a == 0) {
        if (b == 0) {
            cout << "Infinite solutions" << endl;
        } else {
            cout << "No solution" << endl;
        }
    } else {
        double solution = -b / a;
        cout << "Solution: " << solution << endl;
    }

    return 0;
