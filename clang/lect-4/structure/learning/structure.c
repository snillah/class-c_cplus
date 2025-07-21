#include <stdio.h>
#include <string.h>

// Define a structure named Student
struct Student {
    int id;
    char name[50];
    float marks;
};
void displayDetials(struct Student s);

int main() {
    // Declare a structure variable
    struct Student s1;

    // Assign values
    s1.id = 1;
    strcpy(s1.name, "John");
    s1.marks = 89.5;

    // Print values
    // printf("ID: %d\n", s1.id);
    // printf("Name: %s\n", s1.name);
    // printf("Marks: %.2f\n", s1.marks);
    displayDetials(s1);

    return 0;
}

void displayDetials(struct Student s){
    printf("ID: %d\n", s.id);
    printf("Name: %s\n", s.name);
    printf("Marks: %.2f\n", s.marks);
}