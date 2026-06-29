#include <iostream>
#include <string>
using namespace std;

struct Product
{
    int id;
    string name;
    int quantity;
    float price;
};

int main()
{
    Product p[100];
    int n = 0, choice, searchId, i;
    bool found;

    do
    {
        cout << "\n===== INVENTORY MANAGEMENT SYSTEM =====";
        cout << "\n1. Add Product";
        cout << "\n2. Display Products";
        cout << "\n3. Search Product";
        cout << "\n4. Update Quantity";
        cout << "\n5. Exit";
        cout << "\nEnter your choice: ";
        cin >> choice;

        switch(choice)
        {
            case 1:
                cout << "\nEnter Product ID: ";
                cin >> p[n].id;

                cout << "Enter Product Name: ";
                cin >> p[n].name;

                cout << "Enter Quantity: ";
                cin >> p[n].quantity;

                cout << "Enter Price: ";
                cin >> p[n].price;

                n++;
                cout << "Product Added Successfully!\n";
                break;

            case 2:
                if(n == 0)
                {
                    cout << "No products available.\n";
                }
                else
                {
                    cout << "\nID\tName\tQuantity\tPrice\n";
                    for(i = 0; i < n; i++)
                    {
                        cout << p[i].id << "\t"
                             << p[i].name << "\t"
                             << p[i].quantity << "\t\t"
                             << p[i].price << endl;
                    }
                }
                break;

            case 3:
                cout << "Enter Product ID to Search: ";
                cin >> searchId;

                found = false;
                for(i = 0; i < n; i++)
                {
                    if(p[i].id == searchId)
                    {
                        cout << "\nProduct Found\n";
                        cout << "ID: " << p[i].id << endl;
                        cout << "Name: " << p[i].name << endl;
                        cout << "Quantity: " << p[i].quantity << endl;
                        cout << "Price: " << p[i].price << endl;
                        found = true;
                        break;
                    }
                }

                if(!found)
                    cout << "Product Not Found!\n";
                break;

            case 4:
                cout << "Enter Product ID: ";
                cin >> searchId;

                found = false;
                for(i = 0; i < n; i++)
                {
                    if(p[i].id == searchId)
                    {
                        cout << "Enter New Quantity: ";
                        cin >> p[i].quantity;
                        cout << "Quantity Updated Successfully!\n";
                        found = true;
                        break;
                    }
                }

                if(!found)
                    cout << "Product Not Found!\n";
                break;

            case 5:
                cout << "Exiting Program...\n";
                break;

            default:
                cout << "Invalid Choice!\n";
        }

    } while(choice != 5);

    return 0;
}