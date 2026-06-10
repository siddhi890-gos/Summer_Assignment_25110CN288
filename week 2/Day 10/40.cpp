#include <iostream>
using namespace std;

int main() {
    int rows;
    // character pyramid
    // Input number of rows
    cout << "Enter number of rows: ";
    cin >> rows;

    // Outer loop for rows
    for (int i = 1; i <= rows; i++) {

        // Print spaces
        for (int j = 1; j <= rows - i; j++) {
            cout << " ";
        }

        // Print increasing characters
        for (int j = 0; j < i; j++) {
            cout << char('A' + j);
        }

        // Print decreasing characters
        for (int j = i - 2; j >= 0; j--) {
            cout << char('A' + j);
        }

        cout << endl;
    }

    return 0;
}