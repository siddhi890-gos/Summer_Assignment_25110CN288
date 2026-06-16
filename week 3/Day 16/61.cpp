#include <iostream>
using namespace std;

int main() {
    int n;

    cout << "Enter value of n: ";
    cin >> n;

    int arr[n - 1];
    int sum = 0;

    cout << "Enter " << n - 1 << " elements: ";
    for (int i = 0; i < n - 1; i++) {
        cin >> arr[i];
        sum += arr[i];
    }

    int totalSum = n * (n + 1) / 2;
    int missingNumber = totalSum - sum;

    cout << "Missing Number = " << missingNumber << endl;

    return 0;
}