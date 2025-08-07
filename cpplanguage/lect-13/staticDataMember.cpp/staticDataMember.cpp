#include <iostream>
using namespace std;

class Employee {
public:
    static int count;  // Declaration

    Employee() {
        count++;
    }

    void showCount() {
        cout << "Employee count: " << count << endl;
    }
};

// Definition outside the class
int Employee::count = 0;

int main() {
    Employee e1, e2, e3;

    e1.showCount();  // Output: 3
    e2.showCount();  // Output: 3

    cout << "Access using class name: " << Employee::count << endl;  // Output: 3

    return 0;
}
