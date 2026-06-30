#include <iostream>
#include <string>
using namespace std;

int id[50], salary[50];
string name[50];
int n = 0;

void addEmployee()
{
    cout << "\nEnter Employee ID: ";
    cin >> id[n];

    cout << "Enter Employee Name: ";
    cin >> name[n];

    cout << "Enter Salary: ";
    cin >> salary[n];

    n++;
    cout << "Employee Added Successfully!\n";
}

void displayEmployee()
{
    if(n == 0)
    {
        cout << "No Employee Record Found!\n";
        return;
    }

    cout << "\nID\tName\tSalary\n";

    for(int i = 0; i < n; i++)
    {
        cout << id[i] << "\t" << name[i] << "\t" << salary[i] << endl;
    }
}

void searchEmployee()
{
    int searchId;
    cout << "\nEnter Employee ID: ";
    cin >> searchId;

    for(int i = 0; i < n; i++)
    {
        if(id[i] == searchId)
        {
            cout << "\nEmployee Found\n";
            cout << "ID: " << id[i] << endl;
            cout << "Name: " << name[i] << endl;
            cout << "Salary: " << salary[i] << endl;
            return;
        }
    }

    cout << "Employee Not Found!\n";
}

int main()
{
    int choice;

    do
    {
        cout << "\n===== EMPLOYEE MANAGEMENT SYSTEM =====";
        cout << "\n1. Add Employee";
        cout << "\n2. Display Employees";
        cout << "\n3. Search Employee";
        cout << "\n4. Exit";
        cout << "\nEnter Choice: ";
        cin >> choice;

        switch(choice)
        {
            case 1:
                addEmployee();
                break;

            case 2:
                displayEmployee();
                break;

            case 3:
                searchEmployee();
                break;

            case 4:
                cout << "Thank You!";
                break;

            default:
                cout << "Invalid Choice!";
        }

    } while(choice != 4);

    return 0;
}