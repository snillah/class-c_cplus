#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> v = {1, 2, 3};
    v.push_back(4);  // Add element

    for(int num : v)
        cout << num << " ";
    return 0;
}
