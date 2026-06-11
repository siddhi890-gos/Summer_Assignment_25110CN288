#include <iostream>
using namespace std;

int findMax(int a, int b)
{
    if (a > b)
        return a;
    else
        return b;
}

int main()
{
    int num1, num2;

    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    cout << "Maximum number = " << findMax(num1, num2);

    return 0;
}