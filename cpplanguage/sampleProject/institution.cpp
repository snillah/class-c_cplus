#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>
#include <string>
using namespace std;

// Struct to hold student data
struct Student {
    string name;
    int marks;
    string course;
};

// Function to assign course based on marks
string assignCourse(int marks) {
    if (marks >= 90) return "Computer Science";
    else if (marks >= 75) return "Electronics";
    else if (marks >= 60) return "Mechanical";
    else return "General Studies";
}

// Function to read CSV into vector
vector<Student> readCSV(const string &filename) {
    vector<Student> students;
    ifstream file(filename);

    if (!file.is_open()) {
        cerr << "Error: Could not open file." << endl;
        return students;
    }

    string line;
    getline(file, line); // skip header

    while (getline(file, line)) {
        stringstream ss(line);
        string name, marksStr;
        getline(ss, name, ',');
        getline(ss, marksStr, ',');

        Student s;
        s.name = name;
        s.marks = stoi(marksStr);
        s.course = assignCourse(s.marks);

        students.push_back(s); // dynamic growth
    }

    file.close();
    return students;
}

int main() {
    string filename = "students.csv";
    vector<Student> students = readCSV(filename);

    cout << "Course Allocation Result:\n";
    for (const auto &s : students) {
        cout << s.name << " (" << s.marks << ") -> " << s.course << endl;
    }

    return 0;
}
