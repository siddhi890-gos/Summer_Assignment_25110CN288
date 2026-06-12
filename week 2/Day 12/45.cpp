#include <iostream>
using namespace std;

// Function to check palindrome number
bool isPalindrome(int num) {
    int original = num;
    int reverse = 0;

    while (num > 0) {
        int digit = num % 10;
        reverse = reverse * 10 + digit;
        num = num / 10;
    }

    return (original == reverse);
}

int main() {
    int num;

    cout << "Enter a number: ";
    cin >> num;

    if (isPalindrome(num))
        cout << num << " is a Palindrome Number." << endl;
    else
        cout << num << " is not a Palindrome Number." << endl;

    return 0;
}