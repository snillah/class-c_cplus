
1.User-defined Functions in C
These are custom functions created by programmers to perform specific tasks as required by the program.

The following are the types of user-defined functions in C:

A. Functions with No Parameters and No Return Value
These functions neither take input nor return a result. They are used for simple, standalone tasks.

Example:
#include <stdio.h>

void greet() {
    printf("Hello, World!\n");
}

int main() {
    greet(); // Function call
    return 0;
}
Run Code

Output:
Hello, World!

Uses: Display messages or perform independent tasks.
 
Syntax:
return_type function_name(parameter_list);

Example:
int add(int a, int b);

Why Declare?
Function declarations are essential when the function definition appears after the main() function to avoid compilation errors.

Defining a Function in C Program
The function definition includes the full implementation of the function, including the logic inside its body.

Syntax:
return_type function_name(parameter_list) {
    // Function body: statements and return (if needed)
}

Example:
int add(int a, int b) {
    return a + b;
}

Why Define?
The definition specifies the actual behavior of the function when it is called.

Calling a Function in C
A function is invoked using its name and passing the required arguments (if any).

Syntax:
function_name(arguments);

Example:
int result = add(5, 3); // Calling the add function

Why Call?
The call transfers control to the function, executes its logic, and optionally retrieves a result.

C Language Functions: Parameters and Arguments
1. Parameters
Parameters are the aariables listed in the function declaration and definition to receive values from the caller.

Purpose: Act as placeholders for the input data a function will process.

2. Arguments
Arguments are the actual values or expressions passed to the function when it is called.

Purpose: Supply the data for the function to process.


B. Functions with Parameters but No Return Value
These functions take input parameters but don’t return a result.

Example:
#include <stdio.h>

void displaySum(int a, int b) {
    printf("Sum: %d\n", a + b);
}

int main() {
    displaySum(5, 3); // Function call
    return 0;
}
Run Code

Output:
Sum: 8

Uses: Perform operations using given inputs but without requiring a return value.

C. Functions with No Parameters but a Return Value
These functions don’t take input but return a result.

Example:
#include <stdio.h>

int getNumber() {
    return 42;
}

int main() {
    int num = getNumber(); // Function call
    printf("Number: %d\n", num);
    return 0;
}
Run Code

Output:
Number: 42

Uses: Generate or retrieve data without requiring input.

D. Functions with Parameters and a Return Value
These functions take input parameters and return a result.

Example:
#include <stdio.h>

int multiply(int a, int b) {
    return a * b;
}

int main() {
    int result = multiply(4, 5); // Function call
    printf("Product: %d\n", result);
    return 0;
}
Run Code

Output:
Product: 20

Uses: Perform calculations or operations and return results for further use.

Function Declaration in C
Declaring the functions tells the compiler about the function's name, return type, and parameters before its use.

Syntax:
return_type function_name(parameter_list);

Example:
int add(int a, int b);

Why Declare?
Function declarations are essential when the function definition appears after the main() function to avoid compilation errors.

Defining a Function in C Program
The function definition includes the full implementation of the function, including the logic inside its body.

Syntax:
return_type function_name(parameter_list) {
    // Function body: statements and return (if needed)
}

Example:
int add(int a, int b) {
    return a + b;
}

Why Define?
The definition specifies the actual behavior of the function when it is called.

Calling a Function in C
A function is invoked using its name and passing the required arguments (if any).

Syntax:
function_name(arguments);

Example:
int result = add(5, 3); // Calling the add function

Why Call?
The call transfers control to the function, executes its logic, and optionally retrieves a result.

C Language Functions: Parameters and Arguments
1. Parameters
Parameters are the aariables listed in the function declaration and definition to receive values from the caller.

Purpose: Act as placeholders for the input data a function will process.

2. Arguments
Arguments are the actual values or expressions passed to the function when it is called.

Purpose: Supply the data for the function to process.

