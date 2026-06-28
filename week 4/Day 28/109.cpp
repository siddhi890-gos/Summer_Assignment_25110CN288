#include <iostream>
#include <string>
using namespace std;

int main() {
    string book[10];
    int count = 0;
    int choice;

    do {
        cout << "\n===== Library Management System =====\n";
        cout << "1. Add Book\n";
        cout << "2. Display Books\n";
        cout << "3. Search Book\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;
        cin.ignore();

        switch (choice) {
        case 1:
            if (count < 10) {
                cout << "Enter Book Name: ";
                getline(cin, book[count]);
                count++;
                cout << "Book Added Successfully!\n";
            } else {
                cout << "Library is Full!\n";
            }
            break;

        case 2:
            if (count == 0) {
                cout << "No Books Available.\n";
            } else {
                cout << "\nBooks in Library:\n";
                for (int i = 0; i < count; i++) {
                    cout << i + 1 << ". " << book[i] << endl;
                }
            }
            break;

        case 3: {
            string search;
            bool found = false;

            cout << "Enter Book Name to Search: ";
            getline(cin, search);

            for (int i = 0; i < count; i++) {
                if (book[i] == search) {
                    cout << "Book Found!\n";
                    found = true;
                    break;
                }
            }

            if (!found)
                cout << "Book Not Found!\n";

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