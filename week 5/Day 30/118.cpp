#include <iostream>
#include <string>
using namespace std;

int main()
{
    string book[50];
    string author[50];
    int n = 0, choice;
    string searchBook;

    do
    {
        cout << "\n===== MINI LIBRARY SYSTEM =====";
        cout << "\n1. Add Book";
        cout << "\n2. Display Books";
        cout << "\n3. Search Book";
        cout << "\n4. Exit";
        cout << "\nEnter your choice: ";
        cin >> choice;

        switch(choice)
        {
            case 1:
                cout << "Enter Book Name: ";
                cin >> book[n];

                cout << "Enter Author Name: ";
                cin >> author[n];

                n++;
                cout << "Book Added Successfully!\n";
                break;

            case 2:
                cout << "\nBook Name\tAuthor\n";
                for(int i = 0; i < n; i++)
                {
                    cout << book[i] << "\t\t" << author[i] << endl;
                }
                break;

            case 3:
                cout << "Enter Book Name to Search: ";
                cin >> searchBook;

                for(int i = 0; i < n; i++)
                {
                    if(book[i] == searchBook)
                    {
                        cout << "Book Found!\n";
                        cout << "Book Name : " << book[i] << endl;
                        cout << "Author    : " << author[i] << endl;
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