In C++, protected is an access specifier used in classes. It controls how class members (variables and methods) can be accessed.

Access Specifiers Recap

| Specifier     | Accessible in Class | Accessible in Derived Class | Accessible Outside Class |
| ------------- | ------------------- | --------------------------- | ------------------------ |
| **public**    | ✅ Yes               | ✅ Yes                       | ✅ Yes                    |
| **protected** | ✅ Yes               | ✅ Yes                       | ❌ No                     |
| **private**   | ✅ Yes               | ❌ No                        | ❌ No                     |


Protected Example

# #include <iostream>
# using namespace std;

# class Base {
# protected:              // Protected member
#     int protectedVar;

# public:
#     Base() : protectedVar(100) {}
# };

# class Derived : public Base {
# public:
#     void show() {
#         cout << "Accessing protectedVar from derived class: " 
#              << protectedVar << endl;  // ✅ Allowed
#     }
# };

# int main() {
#     Derived d;
#     d.show();

#     // cout << d.protectedVar; ❌ Error: cannot access protected member outside
#     return 0;
# }

When to Use protected?
When you want derived classes to access a member,

But you want to hide it from outside code



Real-world Analogy:
Think of a family member:

Private → only you can access (not even children).

Protected → children can access, but outsiders cannot.

Public → everyone can access.


Base() : protectedVar(100) {}
What it means

Explanation
Base() → Constructor of the Base class.

: protectedVar(100) → Initializes the protectedVar before the constructor body runs.

Equivalent to writing inside the constructor:
protectedVar = 100;

But initializer lists are preferred because:

They initialize members directly instead of default-constructing and then assigning.

Required for initializing const members or references.

More efficient for objects like arrays or complex classes.

class Base {
protected:
    int protectedVar;

public:
    // Using initializer list
    Base() : protectedVar(100) {
        cout << "Constructor executed" << endl;
    }
};

This sets protectedVar = 100 before entering the constructor body.

Why Use It?
Required for:

const int x;
int& ref;
More efficient than assigning inside the constructor body.

Used to call parent constructors in inheritance:

Derived() : Base(100) {}