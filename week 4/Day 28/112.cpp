#include <iostream>
#include <string>
using namespace std;

int main() {
    string name[10], phone[10];
    int count = 0;
    int choice;

    do {
        cout << "\n===== Contact Management System =====\n";
        cout << "1. Add Contact\n";
        cout << "2. Display Contacts\n";
        cout << "3. Search Contact\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;
        cin.ignore();

        switch (choice) {
        case 1:
            if (count < 10) {
                cout << "Enter Name: ";
                getline(cin, name[count]);
                cout << "Enter Phone Number: ";
                getline(cin, phone[count]);
                count++;
                cout << "Contact Added Successfully!\n";
            } else {
                cout << "Contact List is Full!\n";
            }
            break;

        case 2:
            if (count == 0) {
                cout << "No Contacts Available.\n";
            } else {
                cout << "\nContact List:\n";
                for (int i = 0; i < count; i++) {
                    cout << i + 1 << ". " << name[i]
                         << " - " << phone[i] << endl;
                }
            }
            break;

        case 3: {
            string search;
            bool found = false;

            cout << "Enter Name to Search: ";
            getline(cin, search);

            for (int i = 0; i < count; i++) {
                if (name[i] == search) {
                    cout << "Name: " << name[i] << endl;
                    cout << "Phone: " << phone[i] << endl;
                    found = true;
                    break;
                }
            }

            if (!found)
                cout << "Contact Not Found!\n";
            break;
        }

        case 4:
            cout << "Exiting Program...\n";
            break;

        default:
            cout << "Invalid Choice!\n";
        }

    } while (choice != 4);

    return 0;
}