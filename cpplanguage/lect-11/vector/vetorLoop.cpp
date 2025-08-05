#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> nums = {1, 2, 3, 4, 5};

    nums.push_back(6); // add 6 at end
    nums.pop_back(); // add 6 at end
    nums.erase(nums.begin() + 2); // remove 3rd element (value 3)

    if(nums.empty()){
        cout<<"Vetcor is Not empty"<<endl;
    }
    nums.clear();
    cout << "Elements: ";
    for (size_t i = 0; i < nums.size(); i++) {
        cout << nums[i] << " ";
    }
    cout << endl;

    cout << "Front: " << nums.front() << " | Back: " << nums.back() << endl;

    return 0;
}
