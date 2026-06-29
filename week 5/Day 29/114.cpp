#include <iostream>
using namespace std;

int main()
{
    int arr[100], n, choice, i, sum = 0;
    int max, min, key;
    bool found = false;

    cout << "Enter the number of elements: ";
    cin >> n;

    cout << "Enter array elements:\n";
    for(i = 0; i < n; i++)
        cin >> arr[i];

    do
    {
        cout << "\n===== MENU =====";
        cout << "\n1. Display Array";
        cout << "\n2. Find Maximum";
        cout << "\n3. Find Minimum";
        cout << "\n4. Find Sum";
        cout << "\n5. Search Element";
        cout << "\n6. Exit";
        cout << "\nEnter your choice: ";
        cin >> choice;

        switch(choice)
        {
            case 1:
                cout << "Array Elements: ";
                for(i = 0; i < n; i++)
                    cout << arr[i] << " ";
                cout << endl;
                break;

            case 2:
                max = arr[0];
                for(i = 1; i < n; i++)
                {
                    if(arr[i] > max)
                        max = arr[i];
                }
                cout << "Maximum Element = " << max << endl;
                break;

            case 3:
                min = arr[0];
                for(i = 1; i < n; i++)
                {
                    if(arr[i] < min)
                        min = arr[i];
                }
                cout << "Minimum Element = " << min << endl;
                break;

            case 4:
                sum = 0;
                for(i = 0; i < n; i++)
                    sum += arr[i];
                cout << "Sum = " << sum << endl;
                break;

            case 5:
                cout << "Enter element to search: ";
                cin >> key;
                found = false;

                for(i = 0; i < n; i++)
                {
                    if(arr[i] == key)
                    {
                        cout << "Element found at position " << i + 1 << endl;
                        found = true;
                        break;
                    }
                }

                if(!found)
                    cout << "Element not found." << endl;
                break;

            case 6:
                cout << "Exiting Program..." << endl;
                break;

            default:
                cout << "Invalid Choice!" << endl;
        }

    } while(choice != 6);

    return 0;
}