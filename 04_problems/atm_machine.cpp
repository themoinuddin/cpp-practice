// Author: Moin Uddin
// Description: Simple ATM machine simulation (balance check, deposit, withdraw)
// Example: Balance 1000 -> Withdraw 500 -> New Balance = 500

#include <iostream>
using namespace std;

int main() {
    double balance = 1000.0;
    int choice;
    double amount;

    do {
        cout << "\n--- ATM Machine ---\n";
        cout << "1. Check Balance\n2. Deposit\n3. Withdraw\n4. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        if (choice == 1) {
            cout << "Balance = " << balance << endl;
        }
        else if (choice == 2) {
            cout << "Enter amount to deposit: ";
            cin >> amount;
            balance += amount;
            cout << "New Balance = " << balance << endl;
        }
        else if (choice == 3) {
            cout << "Enter amount to withdraw: ";
            cin >> amount;
            if (amount > balance)
                cout << "Insufficient balance!" << endl;
            else {
                balance -= amount;
                cout << "New Balance = " << balance << endl;
            }
        }
        else if (choice != 4) {
            cout << "Invalid choice!" << endl;
        }

    } while (choice != 4);

    cout << "Thank you for using ATM." << endl;
    return 0;
}