#include <iostream>
#include <string>
using namespace std;

int main()
{
    int roll[50];
    string name[50];
    int marks[50];

    int n = 0, choice, r;

    do
    {
        cout << "\n--- Student Record System ---";
        cout << "\n1. Add Student";
        cout << "\n2. Display Students";
        cout << "\n3. Search Student";
        cout << "\n4. Exit";
        cout << "\nEnter your choice: ";
        cin >> choice;

        switch(choice)
        {
            case 1:
                cout << "Enter Roll Number: ";
                cin >> roll[n];

                cout << "Enter Name: ";
                cin >> name[n];

                cout << "Enter Marks: ";
                cin >> marks[n];

                n++;
                cout << "Record Added Successfully!\n";
                break;

            case 2:
                cout << "\nRoll\tName\tMarks\n";
                for(int i = 0; i < n; i++)
                {
                    cout << roll[i] << "\t" << name[i] << "\t" << marks[i] << endl;
                }
                break;

            case 3:
                cout << "Enter Roll Number to Search: ";
                cin >> r;

                for(int i = 0; i < n; i++)
                {
                    if(roll[i] == r)
                    {
                        cout << "Roll No: " << roll[i] << endl;
                        cout << "Name: " << name[i] << endl;
                        cout << "Marks: " << marks[i] << endl;
                    }
                }
                break;

            case 4:
                cout << "Program Ended.";
                break;

            default:
                cout << "Invalid Choice!";
        }

    } while(choice != 4);

    return 0;
}