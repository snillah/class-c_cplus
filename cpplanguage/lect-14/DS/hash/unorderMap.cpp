#include <iostream>
#include <unordered_map>
using namespace std;

int main() {
    unordered_map<string, int> marks;

    // Insert values
    marks["Alice"] = 85;
    marks["Bob"] = 90;
    marks["Charlie"] = 78;

    // Access
    cout << "Alice's marks: " << marks["Alice"] << endl;

    // Iterate
    for (auto& pair : marks) {
        cout << pair.first << " : " << pair.second << endl;
    }

    // Search
    // if (marks.find("Bob") != marks.end()) {
    //     cout << "Bob is found!" << endl;
    // }

    return 0;
}
