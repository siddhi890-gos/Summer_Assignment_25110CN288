#include <iostream>
using namespace std;

int main()
{
    int id[100], n, i;
    string name[100];
    float salary[100];

    cout << "Enter number of employees: ";
    cin >> n;

    // Input employee details
    for(i = 0; i < n; i++)
    {
        cout << "\nEnter details of Employee " << i + 1 << endl;

        cout << "Employee ID: ";
        cin >> id[i];

        cout << "Employee Name: ";
        cin >> name[i];

        cout << "Salary: ";
        cin >> salary[i];
    }

    // Display employee details
    cout << "\n----- Employee Records -----\n";

    for(i = 0; i < n; i++)
    {
        cout << "\nEmployee " << i + 1 << endl;
        cout << "Employee ID: " << id[i] << endl;
        cout << "Employee Name: " << name[i] << endl;
        cout << "Salary: " << salary[i] << endl;
    }

    return 0;
}