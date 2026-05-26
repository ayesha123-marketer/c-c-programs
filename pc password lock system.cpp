// PC PASSWORD LOCK SYSTEM
#include <iostream>
using namespace std;

int main() {

    string password;

    cout << "Enter System Password: ";
    cin >> password;

    if(password == "admin123")
        cout << "\nAccess Granted";

    else
        cout << "\nAccess Denied";

    return 0;
}