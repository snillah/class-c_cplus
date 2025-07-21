#include <stdio.h>
#include <string.h>

struct Date {
    int day, month, year;
};

struct Student {
    int id;
    char name[50];
    struct Date dob;
};

int main() {
    struct Student s = {1, "Bob", {1, 1, 2000}};
    struct Student *ptr = &s;

    // Access nested struct via pointer
    printf("Student: %s\n", ptr->name);
    printf("DOB: %02d/%02d/%d\n", ptr->dob.day, ptr->dob.month, ptr->dob.year);

    return 0;
}