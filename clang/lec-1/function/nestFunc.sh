What is Nested Function in C?
Nesting of functions in C is the concept of defining one function inside another. 
However, standard C (ANSI C) does not support nested functions directly. 
Instead, similar behavior can be achieved using function pointers, static functions, or inline functions.

Does C Support Nested Functions?
No, standard C (ANSI C and ISO C) does not support nested functions. 
Functions in C programming must be defined at the global scope and cannot be declared inside other functions. 

However, GCC (GNU Compiler Collection) provides an extension that allows 
defining functions inside other functions, but this feature is non-portable and not recommended for cross-platform development. 



Example of Nested Function in C (GCC-specific)
#include <stdio.h>

void outerFunction() {
    void innerFunction() { // Nested function (GCC only)
        printf("Hello from inner function!\n");
    }
    innerFunction(); // Calling inner function
}

int main() {
    outerFunction();
    return 0;
}
Run Code

Output:
Hello from inner function!

Limitations of GCC Nested Functions
Not Portable: Only works in GCC, not in other C compilers.

Cannot Be Returned: Nested functions cannot return function pointers safely.

Stack Issues: Using nested functions improperly may lead to memory corruption.

Limitations of GCC Nested Functions
Not Portable: Only works in GCC, not in other C compilers.


1. Using Function Pointers (Dynamic Callback Mechanism)
Function pointers allow passing functions as arguments and calling them dynamically.

Example:
#include <stdio.h>

void helperFunction() {  
    printf("Inside Helper Function\n");  
}

void outerFunction(void (*callback)()) {  
    callback(); // Call the function dynamically  
}

int main() {  
    outerFunction(helperFunction);  
    return 0;  
}

Benefits: Provides flexibility, commonly used in callbacks.

Limitation: Requires careful handling of function pointers.

2. Using Static Functions (Encapsulation Within the Same File)
A static function limits scope to the same file, simulating function nesting.

Example:
#include <stdio.h>

static void helperFunction() {  
    printf("Inside Helper Function\n");  
}

void outerFunction() {  
    helperFunction();  
}

int main() {  
    outerFunction();  
    return 0;  
}

Benefits: Restricts function scope, improves modularity.

Limitation: Not truly nested, but achieves encapsulation.

3. Using Inline Functions (For Small Helper Functions)
Inline functions can be defined inside the same file for performance improvement.

Example:
#include <stdio.h>

inline void helperFunction() {  
    printf("Inside Helper Function\n");  
}

void outerFunction() {  
    helperFunction();  
}

int main() {  
    outerFunction();  
    return 0;  
}

Benefits: Reduces function call overhead, useful for small functions.

Limitation: No function nesting, just optimization.

4. Using Macro Functions (Preprocessor-Based Approach)
Macros can replace small functions but lack type safety.

Example:
#include <stdio.h>

#define HELPER_FUNCTION() printf("Inside Helper Function\n")

void outerFunction() {  
    HELPER_FUNCTION();  
}

int main() {  
    outerFunction();  
    return 0;  
}

Benefits: Avoids function calls, improves performance.

Limitation: No type checking, harder to debug.