What is Function Overloading in C++?
Function overloading means having multiple functions with the same name 
but different parameters (type, number, or order).
The compiler decides which function to call based on the arguments passed
 — this is compile-time polymorphism.

 Why Use It?
To make your code cleaner and more readable, especially when similar operations are 
performed on different types or numbers of inputs.

# include <iostream>
# using namespace std;

# // Function 1
# void greet() {
#     cout << "Hello!" << endl;
# }

# // Function 2 - overloaded with one string parameter
# void greet(string name) {
#     cout << "Hello, " << name << "!" << endl;
# }

# // Function 3 - overloaded with string and int
# void greet(string name, int age) {
#     cout << "Hello, " << name << ". You are " << age << " years old." << endl;
# }

# int main() {
#     greet();                     // Calls greet()
#     greet("Saravanan");          // Calls greet(string)
#     greet("Saravanan", 25);      // Calls greet(string, int)
#     return 0;
# }

Rules for Function Overloading:
You can overload a function if it differs in:

Number of parameters

Type of parameters

Order of parameters

You cannot overload by only changing return type.

Invalid Overloading Example:
int add(int a, int b);
float add(int a, int b); //  Error: same parameters, only return type differs
8
| Overloading Allowed When  | Example                                |
| ------------------------- | -------------------------------------- |
| Different parameter count | `add(int)`, `add(int, int)`            |
| Different types           | `add(int, int)`, `add(double, double)` |
| Different order           | `add(int, float)`, `add(float, int)`   |

