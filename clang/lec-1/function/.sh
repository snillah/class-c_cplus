



3.Recursive Functions in C
It is a function that calls itself to solve a smaller instance of the same problem. The recursive functions are used in problems like factorial, Fibonacci series, or tree traversals.

Example:
#include <stdio.h>

# int factorial(int n) {
#     if (n == 0) return 1; // Base case
#     return n * factorial(n - 1); // Recursive call
# }

# int main() {
#     int result = factorial(5); // Function call
#     printf("Factorial: %d\n", result);
#     return 0;
# }
Run Code

Output:
Factorial: 120

4.Inline Functions in C
These are functions defined using the inline keyword, instructing the compiler to replace function calls with the actual function code to optimize performance.

Example:
# inline int square(int x) {
#     return x * x;
# }

# int main() {
#     printf("Square of 5: %d\n", square(5));
#     return 0;
# }
Run Code

Output:
Square of 5: 25



B. Built-in Functions in C

These are pre-defined functions in C, provided by libraries, to perform standard operations like input/output, math calculations, string manipulations, etc.

Some of the common built-in functions in C include:

Input/Output Functions: printf(), scanf()

Mathematical Functions: sqrt(), pow(), abs()
#include <stdio.h>
#include <math.h>

# int main() {
#     double result = sqrt(16); // Using the sqrt() function
#     printf("Square root of 16: %.2f\n", result);
#     return 0;
# }

String Functions: strlen(), strcpy(), strcmp()

Uses of pre-defined functions of C:

Simplify complex tasks like mathematical operations.

Provide standard functionalities, reducing the need to write extra code.




Uses of Functions in C Programming
Code Reusability: Avoids rewriting the same code multiple times.

Modularity: Divides the program into smaller, manageable parts.

Readability: Makes the code more organized and easier to understand.

Debugging: Easier to identify and fix errors in smaller, independent functions.

Collaboration: Teams can work on different functions independently.
