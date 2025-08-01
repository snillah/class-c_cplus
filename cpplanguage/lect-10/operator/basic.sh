What is Operator Overloading in C++?
Operator Overloading allows you to redefine how operators work for user-defined types (classes/structs).
It makes objects behave like built-in types when using operators 
# like +, -, <<, ==, etc.

Syntax:

return_type operator<symbol>(parameters);

Program

Explanation:
The operator + is overloaded for the Complex class.

When c1 + c2 is used, it calls:

Complex operator+(const Complex& obj)
Returns a new Complex object with summed real and imaginary parts.

Other Operators You Can Overload
Arithmetic: +, -, *, /, %

Relational: ==, !=, <, >

Increment/Decrement: ++, --

Assignment: =, +=, -=

Stream: <<, >> (for I/O)

Subscript: []

Function call: ()
