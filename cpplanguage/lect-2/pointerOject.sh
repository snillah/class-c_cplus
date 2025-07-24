What is a Pointer Object?

In C or C++, a pointer is a variable that stores the memory address of another variable.
When you say "pointer object", it often means:

A pointer that points to an object (in C++, this is often a class object).

Or a dynamically allocated object using a pointer.

Simple Example in C++

class Student {
public:
    int age;
};

int main() {
    Student* ptr = new Student(); // pointer object
    ptr->age = 21;
    delete ptr; // free memory
}

Why is it called Dynamic?
Dynamic memory means:
The memory is allocated during runtime, not compile time.

You decide the size and lifetime of the object during program execution.

In C++:
int* arr = new int[5]; // dynamic array

In C:
int* arr = (int*)malloc(5 * sizeof(int)); // dynamic array in heap


What is Heap Memory?
n memory management, there are two main regions:

| Memory Type | Purpose                             | Allocated By                    |
| ----------- | ----------------------------------- | ------------------------------- |
| **Stack**   | For function calls, local variables | Automatically                   |
| **Heap**    | For dynamic memory                  | Manually using `malloc` / `new` |

Heap memory lives longer than stack memory.

You must free it manually using delete (C++) or free() (C).

Reports

| Term           | Meaning                                                       |
| -------------- | ------------------------------------------------------------- |
| Pointer        | Variable that stores memory address                           |
| Pointer Object | A pointer pointing to an object (often dynamically allocated) |
| Dynamic Memory | Allocated at runtime using `new`C++ or `malloc` C                  |
| Heap Memory    | Area where dynamic memory is stored; must be managed manually |
