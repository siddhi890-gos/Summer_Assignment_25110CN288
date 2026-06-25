#include <iostream>
using namespace std;

int main() {
    string name[5], temp;

    cout << "Enter 5 names:\n";
    for (int i = 0; i < 5; i++) {
        cin >> name[i];
    }

    for (int i = 0; i < 5; i++) {
        for (int j = i + 1; j < 5; j++) {
            if (name[i] > name[j]) {
                temp = name[i];
                name[i] = name[j];
                name[j] = temp;
            }
        }
    }

    cout << "\nNames in alphabetical order:\n";
    for (int i = 0; i < 5; i++) {
        cout << name[i] << endl;
    }

    return 0;
}