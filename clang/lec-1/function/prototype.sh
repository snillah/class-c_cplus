C Function Prototype Examples
The following are top examples of function prototypes in C:

1. Simple Prototype with Parameters and Return Type
A prototype for adding two integers.

Prototype:
int add(int a, int b);

Implementation:
#include <stdio.h>

int add(int a, int b); // Function prototype

int main() {
    int result = add(3, 5); // Function call
    printf("Sum: %d\n", result);
    return 0;
}

int add(int a, int b) { // Function definition
    return a + b;
}

2. Prototype Without Parameters
A prototype for a function that takes no parameters and returns nothing.

Prototype:
void displayMessage();

Implementation:
#include <stdio.h>

void displayMessage(); // Function prototype

int main() {
    displayMessage(); // Function call
    return 0;
}

void displayMessage() { // Function definition
    printf("Hello, World!\n");

3. Prototype with No Return Type
A prototype for a function that takes parameters but does not return a value.

Prototype:
void printSum(int a, int b);

Implementation:
#include <stdio.h>

void printSum(int a, int b); // Function prototype

int main() {
    printSum(4, 6); // Function call
    return 0;
}

void printSum(int a, int b) { // Function definition
    printf("Sum: %d\n", a + b);
}

4. Prototype with Array as Parameter
A prototype for a function that takes an array and its size as parameters.

Prototype:
void printArray(int arr[], int size);

Implementation:
#include <stdio.h>

void printArray(int arr[], int size); // Function prototype

int main() {
    int numbers[] = {1, 2, 3, 4, 5};
    printArray(numbers, 5); // Function call
    return 0;
}

void printArray(int arr[], int size) { // Function definition
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

Function Prototype vs Function Declaration in C
Function Prototype specifies the function’s return type, name, and parameter types, ensuring type-checking during compilation. 
On the other hand, function declaration in C is a broader term that informs the compiler about a function’s existence, which may or may not include parameter types. 