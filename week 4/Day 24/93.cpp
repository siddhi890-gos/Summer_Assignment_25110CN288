#include <iostream>
using namespace std;

int main() {
    string str1, str2;

    cout << "Enter first string: ";
    cin >> str1;

    cout << "Enter second string: ";
    cin >> str2;

    string temp = str1 + str1;

    if (temp.find(str2) != -1)
        cout << "Strings are rotations";
    else
        cout << "Strings are not rotations";

    return 0;
}