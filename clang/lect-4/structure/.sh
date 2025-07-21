What is a Structure in C?
A structure (struct) is a user-defined data type 
in C that groups different data types under one name.

Why Use Structures?
To represent real-world entities like Student, Employee, Product, etc.

To store multiple values of different types together.

 Example: Defining and Using a Structure

struct StructName {
    dataType member1;
    dataType member2;
    ...
};

struct Student s1 = {1, "John", 90.0};


struct Student *ptr = &s1;
printf("Name: %s\n", ptr->name);
Concept	Example	Description
Structure declaration  	    struct Student s1;	    Creates a structure variable
Pointer declaration	        struct Student *ptr;	Declares pointer to structure
Point to structure  	    ptr = &s1;	            Assigns address of structure to pointer
Access members via pointer	ptr->id or (*ptr).id	Arrow -> is shorthand for dereferencing

Why Use Pointers to Structures?

Pass large structures efficiently to functions (no need to copy).

Dynamically allocate memory for structures.

Access and modify structure data using dynamic memory.



 Nested Structures (Structure inside Structure)
struct Date {
    int day, month, year;
};

struct Student {
    int id;
    struct Date dob;  // nested structure
};


Accesing :
| Access Type              | Syntax Example    |
| ------------------------ | ----------------- |
| Dot notation             | `s1.dob.day`      |
| Pointer to struct        | `ptr->dob.month`  |
| Pointer with dereference | `(*ptr).dob.year` |

UseCase:

| Benefit                  | Description                                   |
| ------------------------ | --------------------------------------------- |
| Better data organization | Groups related info like name + DOB + address |
| Real-world modeling      | Objects inside objects (e.g., Student → Date) |
| Code readability         | Easier to manage and scale large structures   |


Feature	Description
struct	Keyword for structure
Group variables	Of different types under one name
Use cases	Student, Product, Employee data, etc
Access fields	. or -> (with pointer)

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