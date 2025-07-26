What is enum in C++?

An enum (enumeration) is a user-defined type that assigns names to a set of integer constant values. 
It makes your code more readable and easier to manage, 
especially when dealing with fixed sets of values (like days, states, directions, etc.).

Basic Syntax of enum:

# enum EnumName {
#     VALUE1,
#     VALUE2,
#     VALUE3
# };

By default:

The first value is 0

Others increment by 1 automatically



Example 1: Basic Usage

#include <iostream>
using namespace std;

enum Day { Sunday, Monday, Tuesday, Wednesday, Thursday, Friday, Saturday };

int main() {
    Day today = Friday;

    if (today == Friday) {
        cout << "Weekend is near!" << endl;
    }

    cout << "Numeric value of Friday: " << today << endl;  // Outputs: 5

    return 0;
}

Example 2: Custom Values

enum Status {
    Pending = 1,
    Approved = 5,
    Rejected = 10
};

Here:

Pending = 1

Approved = 5

Rejected = 10

Example 3: enum class (C++11 and newer)
enum class Color {
    Red,
    Green,
    Blue
};
Benefits of enum class:

Strongly typed (no implicit conversion to int)

Scoped (no name conflicts)

| Type         | Implicit Conversion | Scoped | Preferred                   |
| ------------ | ------------------- | ------ | --------------------------- |
| `enum`       | ✅ Yes (to int)      | ❌ No   | For small/simple uses       |
| `enum class` | ❌ No (type safe)    | ✅ Yes  | ✅ Recommended in modern C++ |


