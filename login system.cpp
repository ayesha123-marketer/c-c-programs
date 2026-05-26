// LOGIN SYSTEM
#include <iostream>
using namespace std;

int main() {
    string username, password;

    cout << "Enter Username: ";
    cin >> username;

    cout << "Enter Password: ";
    cin >> password;

    if(username == "ayesha" && password == "1234") {
        cout << "\nLogin Successful!";
    }
    else {
        cout << "\nWrong Username or Password!";
    }

    return 0;
}