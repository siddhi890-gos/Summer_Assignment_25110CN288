#include <iostream>
using namespace std;

int main() {
    int decimal;
    long long binary = 0;
    int place = 1;

    cout << "Enter a decimal number: ";
    cin >> decimal;

    while (decimal > 0) {
        int remainder = decimal % 2;
        binary += remainder * place;
        place *= 10;
        decimal /= 2;
    }

    cout << "Binary number = " << binary;

    return 0;
}