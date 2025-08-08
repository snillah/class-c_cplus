#include <iostream>
#include <unordered_set>
using namespace std;

int main() {
    unordered_set<int> numbers;

    // Insert
    numbers.insert(10);
    numbers.insert(30);
    numbers.insert(20);

    // // Check if element exists
    // if (numbers.find(20) != numbers.end()) {
    //     cout << "20 found!" << endl;
    // }

    // Iterate
    for (int num : numbers) {
        cout << num << " ";
    }

    return 0;
}
