#include <iostream>
using namespace std;

int main() {
    string name;
    int accountNo;
    float balance = 0, amount;
    int choice;

    cout << "Enter Account Holder Name: ";
    getline(cin, name);

    cout << "Enter Account Number: ";
    cin >> accountNo;

    do {
        cout << "\n===== Bank Account System =====\n";
        cout << "1. Deposit Money\n";
        cout << "2. Withdraw Money\n";
        cout << "3. Check Balance\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
        case 1:
            cout << "Enter Deposit Amount: ";
            cin >> amount;
            balance = balance + amount;
            cout << "Amount Deposited Successfully!\n";
            break;

        case 2:
            cout << "Enter Withdraw Amount: ";
            cin >> amount;

            if (amount <= balance) {
                balance = balance - amount;
                cout << "Amount Withdrawn Successfully!\n";
            } else {
                cout << "Insufficient Balance!\n";
            }
            break;

        case 3:
            cout << "\nAccount Holder: " << name;
            cout << "\nAccount Number: " << accountNo;
            cout << "\nCurrent Balance: " << balance << endl;
            break;

        case 4:
            cout << "Thank You! Exiting Program...\n";
            break;

        default:
            cout << "Invalid Choice!\n";
        }

    } while (choice != 4);

    return 0;
}