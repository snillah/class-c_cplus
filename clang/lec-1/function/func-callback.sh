What is Function Callback in C?

A function callback in C is a function passed as an argument to another function, 
allowing the called function to execute it at a specific time. 

C supports callbacks using function pointers, 

which "store" the address of a function and enable dynamic function execution. 
This mechanism is widely used for tasks like event handling, custom comparisons, and modular programming.


Function Callback Syntax

return_type (*function_pointer)(parameter_list);

A Importance of Function Callbacks in C:

Dynamic Behavior: Enables functions to execute different logic at runtime.

Reusability: Makes code modular and avoids repetition.

Flexibility: Facilitates custom behavior in generic functions like sorting.

Event Handling: Useful in scenarios like user interactions or asynchronous programming.

Cleaner Code: Separates logic into smaller, focused functions.


Examples of Function Callback in C

1. Printing a Message
A simple function callback to print a message.

#include <stdio.h>

// Function to be used as a callback
void displayMessage(const char *message) {
    printf("Message: %s\n", message);
}

// Function that accepts a callback
void executeCallback(void (*callback)(const char *), const char *msg) {
    callback(msg); // Call the target function
}

int main() {
    executeCallback(displayMessage, "Hello from Callback!");
    return 0;
}
Run Code

Output:
Message: Hello from Callback!


2. Recursive Callback
Using a callback in a recursive function to apply custom logic.

#include <stdio.h>

// Callback function for custom logic
void printNumber(int n) {
    printf("%d ", n);
}

// Recursive function with a callback
void recursiveCallback(int n, void (*callback)(int)) {
    if (n == 0) return;
    callback(n);
    recursiveCallback(n - 1, callback);
}

int main() {
    recursiveCallback(5, printNumber);
    return 0;
}
Run Code

Output:
5 4 3 2 1