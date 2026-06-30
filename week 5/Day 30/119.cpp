#include <iostream>
#include <string>
using namespace std;

int main()
{
    int id[50], salary[50];
    string name[50];
    int n = 0, choice, searchId;

    do
    {
        cout << "\n===== EMPLOYEE MANAGEMENT SYSTEM =====";
        cout << "\n1. Add Employee";
        cout << "\n2. Display Employees";
        cout << "\n3. Search Employee";
        cout << "\n4. Exit";
        cout << "\nEnter your choice: ";
        cin >> choice;

        switch(choice)
        {
            case 1:
                cout << "Enter Employee ID: ";
                cin >> id[n];

                cout << "Enter Employee Name: ";
                cin >> name[n];

                cout << "Enter Salary: ";
                cin >> salary[n];

                n++;
                cout << "Employee Added Successfully!\n";
                break;

            case 2:
                cout << "\nID\tName\tSalary\n";
                for(int i = 0; i < n; i++)
                {
                    cout << id[i] << "\t" << name[i] << "\t" << salary[i] << endl;
                }
                break;

            case 3:
                cout << "Enter Employee ID to Search: ";
                cin >> searchId;

                for(int i = 0; i < n; i++)
                {
                    if(id[i] == searchId)
                    {
                        cout << "\nEmployee Found\n";
                        cout << "ID: " << id[i] << endl;
                        cout << "Name: " << name[i] << endl;
                        cout << "Salary: " << salary[i] << endl;
                    }
                }
                break;

            case 4:
                cout << "Exiting Program...";
                break;

            default:
                cout << "Invalid Choice!";
        }

    } while(choice != 4);

    return 0;
}