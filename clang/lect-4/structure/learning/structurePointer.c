#include <stdio.h>
#include <string.h>

// Define a structure
struct Student {
    int id;
    char name[50];
};


void printDetails(struct Student std){
    printf("Student ID: %d\n", std.id);
    printf("Student Name: %s\n",std.name);
}

int main() {
    // Declare a structure variable
    struct Student s1;

    // Declare a pointer to structure
    struct Student *ptr;

    // Point to the address of s1
    ptr = &s1;

    // Assign values using the pointer
    ptr->id = 101;
    strcpy(ptr->name, "Alice");

     printDetails(s1);
    // Access and print values
    // printf("Student ID: %d\n", ptr->id);
    // printf("Student Name: %s\n", ptr->name);

    return 0;
}