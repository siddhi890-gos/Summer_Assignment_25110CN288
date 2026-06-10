#include <iostream>
using namespace std;

int main() {
    int rows;
    //reverse pyramid

    // Input number of rows
    cout << "Enter number of rows: ";
    cin >> rows;

    // Outer loop for rows
    for (int i = rows; i >= 1; i--) {

        // Print leading spaces
        for (int j = 1; j <= rows - i; j++) {
            cout << " ";
        }

        // Print stars
        for (int k = 1; k <= (2 * i - 1); k++) {
            cout << "*";
        }

        // Move to next line
        cout << endl;
    }

    return 0;
}