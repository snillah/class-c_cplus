#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    string name;
    int age;
    int marks;

    // Get new data from the user
    cout << "Enter Name: ";
    // cin >> name;
    name = "Guru";
    cout << "Enter Age: ";
    // cin >> age;
    age = 21;
    cout << "Enter Marks: ";
    // cin >> marks;
    marks=80;
    // Open file in append mode
    ofstream file("students.csv", ios::app);
    if (!file.is_open()) {
        cerr << "Error: Could not open file for appending.\n";
        return 1;
    }

    // Append new row
    file << name << "," << age << "," << marks << "\n";

    file.close();

    cout << "Data appended successfully!\n";
    return 0;
}
