// COMPUTER SHOP MANAGEMENT SYSTEM
#include <iostream>
using namespace std;

int main() {

    string customer;
    int choice, quantity, total;

    cout << "===== COMPUTER SHOP =====";

    cout << "\n1. Keyboard = 2000";
    cout << "\n2. Mouse = 1500";
    cout << "\n3. Headphone = 3000";
    cout << "\n4. USB = 1000";

    cout << "\nEnter Customer Name: ";
    cin >> customer;

    cout << "Enter Product Choice: ";
    cin >> choice;

    cout << "Enter Quantity: ";
    cin >> quantity;

    if(choice == 1)
        total = quantity * 2000;

    else if(choice == 2)
        total = quantity * 1500;

    else if(choice == 3)
        total = quantity * 3000;

    else if(choice == 4)
        total = quantity * 1000;

    else
        cout << "Invalid Choice";

    cout << "\nTotal Bill = " << total;

    return 0;
}