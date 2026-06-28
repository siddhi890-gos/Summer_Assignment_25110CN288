#include <iostream>
using namespace std;

int main() {
    int totalSeats = 10;
    int bookedSeats = 0;
    int choice, seats;

    do {
        cout << "\n===== Ticket Booking System =====\n";
        cout << "1. Book Ticket\n";
        cout << "2. Check Available Seats\n";
        cout << "3. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
        case 1:
            cout << "Enter number of tickets to book: ";
            cin >> seats;

            if (seats <= (totalSeats - bookedSeats)) {
                bookedSeats += seats;
                cout << "Ticket Booked Successfully!\n";
            } else {
                cout << "Not Enough Seats Available!\n";
            }
            break;

        case 2:
            cout << "Total Seats     : " << totalSeats << endl;
            cout << "Booked Seats    : " << bookedSeats << endl;
            cout << "Available Seats : " << totalSeats - bookedSeats << endl;
            break;

        case 3:
            cout << "Thank You! Exiting Program...\n";
            break;

        default:
            cout << "Invalid Choice!\n";
        }

    } while (choice != 3);

    return 0;
}