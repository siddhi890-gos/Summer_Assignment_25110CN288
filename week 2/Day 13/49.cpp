#include <iostream>
using namespace std;

int main() {
    int n;

    // Input size of array
    cout << "Enter the number of elements: ";
    cin >> n;

    int arr[n];

    // Input array elements
    cout << "Enter " << n << " elements:\n";
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Display array elements
    cout << "Array elements are: ";
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}