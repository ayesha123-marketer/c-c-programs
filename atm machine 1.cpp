// ATM MACHINE
#include <iostream>
using namespace std;

int main() {
    int balance = 5000;
    int choice, amount;

    cout << "1. Check Balance";
    cout << "\n2. Deposit";
    cout << "\n3. Withdraw";

    cout << "\nEnter choice: ";
    cin >> choice;

    if(choice == 1) {
        cout << "Balance = " << balance;
    }

    else if(choice == 2) {
        cout << "Enter amount: ";
        cin >> amount;

        balance = balance + amount;

        cout << "New Balance = " << balance;
    }

    else if(choice == 3) {
        cout << "Enter amount: ";
        cin >> amount;

        balance = balance - amount;

        cout << "Remaining Balance = " << balance;
    }

    else {
        cout << "Invalid Choice";
    }

    return 0;
}