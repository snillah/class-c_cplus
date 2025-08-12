#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>
#include <string>
using namespace std;

class Student {
public:
    string id;
    string name;
    int age;
    int marks;

    Student(string id,string n, int a, int m) : id(id), name(n), age(a), marks(m) {}
};

class StudentManager {
private:
    vector<Student> students;
    string filename;
    int maxId;

public:
    // Constructor loads CSV
    StudentManager(const string& file) : filename(file) {
        loadCSV();
    }

    // Load CSV data into vector
    void loadCSV() {
        students.clear();   //Removes all existing data from the students vector so you don’t get duplicates when reloading.

        ifstream file(filename);
        if (!file.is_open()) {
            cerr << "Error opening file: " << filename << endl;
            return;
        }
        /*ifstream = input file stream (used to read files).

        Tries to open the CSV file (filename is stored in the class).

        If the file can’t be opened (maybe missing or locked), it prints an error to cerr and stops.*/

        string line;
        bool firstLine = true;
        while (getline(file, line)) {
            // getline(file, line) reads one full line at a time from the file.
            // firstLine is a flag to skip the CSV header row (e.g., Name,Age,Marks).

            if (firstLine) { 
                firstLine = false; 
                continue; 
            }
            // If it’s the very first line, set firstLine = false and skip this iteration (don’t process header row).
            

            stringstream ss(line);
            string idStr, name, ageStr, marksStr;
            // Creates a stringstream from the line so we can split it by commas.
            getline(ss, idStr, ',');
            getline(ss, name, ',');
            getline(ss, ageStr, ',');
            getline(ss, marksStr, ',');
            // Reads name, ageStr, and marksStr separately, stopping at each comma.

            students.emplace_back(idStr ,name, stoi(ageStr), stoi(marksStr));
            // stoi converts the string into integer.
            // emplace_back() constructs a new Student object directly in the vector without making a temporary copy.
        }
        file.close();
    }

    // Display students
    void displayStudents() const {
        for (const auto& s : students) {
            cout <<"Id : "<<s.id<< ", Name: " << s.name << ", Age: " << s.age << ", Marks: " << s.marks << endl;
        }
    }

    // Append a new student to CSV and vector
    void appendStudent(const Student& s) {
        // maxId = students.size();
        // int newId = ++maxId;
        ofstream file(filename, ios::app);
        if (!file.is_open()) {
            cerr << "Error opening file for append: " << filename << endl;
            return;
        }
        file <<s.id << ","<<s.name << "," << s.age << "," <<s.marks << "\n";
        file.close();

        students.push_back(s); // update vector
    }
//     void addStudent() {
//     int newId = ++maxId; // generate new ID
//     students.emplace_back(newId, name, age, marks);
// }
    // Delete a student by name
    void deleteStudent(const string& name) {
        bool found = false;
        for (auto it = students.begin(); it != students.end(); ++it) {
            if (it->name == name) {
                students.erase(it);
                found = true;
                break;
            }
        }

        if (!found) {
            cout << "Student not found.\n";
            return;
        }

        // Rewrite CSV file (clear and re-save all)
        ofstream file(filename);
        if (!file.is_open()) {
            cerr << "Error opening file for rewrite: " << filename << endl;
            return;
        }

        file << "Name,Age,Marks\n"; // header
        for (const auto& s : students) {
            file << s.name << "," << s.age << "," << s.marks << "\n";
        }
        file.close();
    }
};

class ProgramInstitute {

};




int main() {
    StudentManager manager("students.csv");

    cout << "\nInitial Data:\n";
    manager.displayStudents();

    cout << "\nAppending a new student...\n";
    manager.appendStudent(Student("8","Charlie", 22, 88));
    manager.displayStudents();

    cout << "\nDeleting Alice...\n";
    manager.deleteStudent("Alice");
    manager.displayStudents();

    return 0;
}
