// STUDENT RECORD SYSTEM
#include <iostream>
using namespace std;

int main() {
    string name;
    int rollno, marks;

    cout << "Enter Student Name: ";
    cin >> name;

    cout << "Enter Roll Number: ";
    cin >> rollno;

    cout << "Enter Marks: ";
    cin >> marks;

    cout << "\n--- STUDENT RECORD ---";
    cout << "\nName: " << name;
    cout << "\nRoll No: " << rollno;
    cout << "\nMarks: " << marks;

    return 0;
}