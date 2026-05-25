// SIMPLE CALCULATOR IN C++
#include <iostream>
using namespace std;

int main() {
    int a, b, choice;

    cout << "Enter first number: ";
    cin >> a;

    cout << "Enter second number: ";
    cin >> b;

    cout << "\n1. Add";
    cout << "\n2. Subtract";
    cout << "\n3. Multiply";
    cout << "\n4. Divide";

    cout << "\nEnter choice: ";
    cin >> choice;

    if(choice == 1)
        cout << "Answer = " << a + b;

    else if(choice == 2)
        cout << "Answer = " << a - b;

    else if(choice == 3)
        cout << "Answer = " << a * b;

    else if(choice == 4)
        cout << "Answer = " << a / b;

    else
        cout << "Invalid Choice";

    return 0;
}