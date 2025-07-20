What is a Structure in C?
A structure (struct) is a user-defined data type 
in C that groups different data types under one name.

Why Use Structures?
To represent real-world entities like Student, Employee, Product, etc.

To store multiple values of different types together.

 Example: Defining and Using a Structure

#include <stdio.h>

// Define a structure named Student
struct Student {
    int id;
    char name[50];
    float marks;
};

int main() {
    // Declare a structure variable
    struct Student s1;

    // Assign values
    s1.id = 1;
    strcpy(s1.name, "John");
    s1.marks = 89.5;

    // Print values
    printf("ID: %d\n", s1.id);
    printf("Name: %s\n", s1.name);
    printf("Marks: %.2f\n", s1.marks);

    return 0;
}
🔍 strcpy is used to copy strings because you can't assign strings directly to a char[].