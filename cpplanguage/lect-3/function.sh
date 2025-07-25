What is a Function in C++?
A function is a named block of code that performs a specific task. You can call it whenever needed, 
instead of writing the same code again and again.

Why Use Functions?

Avoid code repetition
Improve readability
Make code reusable and modular

Basic Structure of a Function

return_type function_name(parameters) {
    // code to execute
    return value;  // (if return_type is not void)
}

Example
#include <iostream>
using namespace std;

// Function definition
# int add(int a, int b) {
#     return a + b;
# }

# int main() {
#     int result = add(5, 3);  // Function call
#     cout << "Sum is: " << result << endl;
#     return 0;
# }

Breakdown:
int add(int a, int b) → function named add, takes two integers, returns an integer.

add(5, 3) → function call.

return a + b; → sends result back to the caller.

Types of Functions
| Type                           | Example                                          |
| ------------------------------ | ------------------------------------------------ |
| **User-defined**               | You create it (like `add()`)                     |
| **Library functions**          | Provided by C++ (e.g., `cout`, `sqrt`, `strlen`) |
| **Void function**              | Doesn’t return anything → `void greet()`         |
| **Parameterised function**     | Takes input parameters                           |
| **Function with return value** | Returns a result to caller                       |
