#include <iostream>
using namespace std;

int main()
{
    int roll[100], n, i;
    string name[100];
    float marks[100];

    cout << "Enter number of students: ";
    cin >> n;

    // Add student records
    for(i = 0; i < n; i++)
    {
        cout << "\nEnter details of Student " << i + 1 << endl;

        cout << "Roll Number: ";
        cin >> roll[i];

        cout << "Name: ";
        cin >> name[i];

        cout << "Marks: ";
        cin >> marks[i];
    }

    // Display student records
    cout << "\n----- Student Records -----\n";

    for(i = 0; i < n; i++)
    {
        cout << "\nStudent " << i + 1 << endl;
        cout << "Roll Number: " << roll[i] << endl;
        cout << "Name: " << name[i] << endl;
        cout << "Marks: " << marks[i] << endl;
    }

    return 0;
}