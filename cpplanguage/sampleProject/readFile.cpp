#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>
#include <string>
using namespace std;

int main() {
    ifstream file("students.csv"); // Open file for reading
    if (!file.is_open()) {
        cerr << "Error: Could not open file\n";
        return 1;
    }

    string line;
    vector<vector<string>> data; // Store CSV as 2D vector

    while (getline(file, line)) { // Read each line
        vector<string> row;
        string cell;
        stringstream ss(line); // Break line into cells

        while (getline(ss, cell, ',')) { // Split by comma
            row.push_back(cell);
        }
        data.push_back(row);
    }

    file.close();

    // Print CSV contents
    for (const auto& row : data) {
        for (const auto& col : row) {
            cout << col << "\t";
        }
        cout << endl;
    }

    return 0;
}
