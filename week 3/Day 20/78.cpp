#include <iostream>
using namespace std;

int main() {
    int n;

    cout << "Enter the order of the square matrix: ";
    cin >> n;

    int matrix[100][100];

    cout << "Enter the elements of the matrix:\n";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> matrix[i][j];
        }
    }

    bool symmetric = true;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (matrix[i][j] != matrix[j][i]) {
                symmetric = false;
                break;
            }
        }
        if (!symmetric)
            break;
    }

    if (symmetric)
        cout << "The matrix is symmetric.";
    else
        cout << "The matrix is not symmetric.";

    return 0;
}