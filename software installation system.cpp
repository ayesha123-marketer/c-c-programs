// SOFTWARE INSTALLATION SYSTEM
#include <iostream>
using namespace std;

int main() {

    int choice;

    cout << "1. MS Office";
    cout << "\n2. VS Code";
    cout << "\n3. Chrome";

    cout << "\nSelect Software: ";
    cin >> choice;

    if(choice == 1)
        cout << "MS Office Installed";

    else if(choice == 2)
        cout << "VS Code Installed";

    else if(choice == 3)
        cout << "Chrome Installed";

    else
        cout << "Invalid Choice";

    return 0;
}