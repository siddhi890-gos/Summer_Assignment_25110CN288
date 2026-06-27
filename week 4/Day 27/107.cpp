#include <iostream>
using namespace std;

int main()
{
    int id;
    string name;
    float basic, hra, da, netSalary;

    cout << "Enter Employee ID: ";
    cin >> id;

    cout << "Enter Employee Name: ";
    cin >> name;

    cout << "Enter Basic Salary: ";
    cin >> basic;

    hra = basic * 0.20;   // 20% HRA
    da = basic * 0.10;    // 10% DA
    netSalary = basic + hra + da;

    cout << "\n----- Salary Details -----" << endl;
    cout << "Employee ID: " << id << endl;
    cout << "Employee Name: " << name << endl;
    cout << "Basic Salary: " << basic << endl;
    cout << "HRA: " << hra << endl;
    cout << "DA: " << da << endl;
    cout << "Net Salary: " << netSalary << endl;

    return 0;
}