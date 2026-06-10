#include <iostream>
using namespace std;

int main() {
    int rows;
    //number pyramid
    // Input number of rows
    cout << "Enter number of rows: ";
    cin >> rows;

    // Outer loop for rows
    for (int i = 1; i <= rows; i++) {

        // Print spaces
        for (int j = 1; j <= rows - i; j++) {
            cout << " ";
        }

        // Print increasing numbers
        for (int j = 1; j <= i; j++) {
            cout << j;
        }

        // Print decreasing numbers
        for (int j = i - 1; j >= 1; j--) {
            cout << j;
        }

        // Move to next line
        cout << endl;
    }

    return 0;
}