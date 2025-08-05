#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> arr;  // Declare vector of integers

    // Adding elements
    arr.push_back(10);
    arr.push_back(20);
    arr.push_back(30);

    // Access elements
    cout << "First element: " << arr[0] << endl;

    // Iterate
    for (int val : arr) {
        cout << val << " ";
    }

    return 0;
}
