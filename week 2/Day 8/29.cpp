#include <iostream>
using namespace std;

int main() {
    int rows;

    cout << "Enter the number of rows: ";
    cin >> rows;

    for (int i = 1; i <= rows; i++) { //for row
        for (int j = 1; j <= i; j++) { //for colume
            cout << "* ";
        }
        cout << endl;
    }

    return 0;
}