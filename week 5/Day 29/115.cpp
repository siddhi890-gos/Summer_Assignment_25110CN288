#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    string str, temp;
    int choice;

    cout << "Enter a string: ";
    getline(cin, str);

    do
    {
        cout << "\n===== MENU =====";
        cout << "\n1. Display String";
        cout << "\n2. Find Length";
        cout << "\n3. Reverse String";
        cout << "\n4. Convert to Uppercase";
        cout << "\n5. Convert to Lowercase";
        cout << "\n6. Exit";
        cout << "\nEnter your choice: ";
        cin >> choice;

        switch(choice)
        {
            case 1:
                cout << "String: " << str << endl;
                break;

            case 2:
                cout << "Length = " << str.length() << endl;
                break;

            case 3:
                temp = str;
                reverse(temp.begin(), temp.end());
                cout << "Reversed String: " << temp << endl;
                break;

            case 4:
                temp = str;
                for(int i = 0; i < temp.length(); i++)
                    temp[i] = toupper(temp[i]);
                cout << "Uppercase: " << temp << endl;
                break;

            case 5:
                temp = str;
                for(int i = 0; i < temp.length(); i++)
                    temp[i] = tolower(temp[i]);
                cout << "Lowercase: " << temp << endl;
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