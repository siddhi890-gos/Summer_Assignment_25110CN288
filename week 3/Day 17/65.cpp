#include <iostream>
using namespace std;

int main() {
    int arr1[] = {5, 2, 9, 1};
    int arr2[] = {8, 3, 7, 4};

    int n1 = sizeof(arr1) / sizeof(arr1[0]);
    int n2 = sizeof(arr2) / sizeof(arr2[0]);

    int merged[n1 + n2];

    // Copy first array
    for (int i = 0; i < n1; i++) {
        merged[i] = arr1[i];
    }

    // Copy second array
    for (int i = 0; i < n2; i++) {
        merged[n1 + i] = arr2[i];
    }

    cout << "Merged Array: ";
    for (int i = 0; i < n1 + n2; i++) {
        cout << merged[i] << " ";
    }

    return 0;
}