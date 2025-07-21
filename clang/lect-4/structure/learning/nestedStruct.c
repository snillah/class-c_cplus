#include <stdio.h>
#include <string.h>

// struct Date {
//     int day, month, year;
// };

// struct Student {
//     int id;
//     char name[50];
//     struct Date dob;
// };

 struct Date {
    int day,month,year;
};

struct Student{
    int Id;
    char name[50];
    struct Date dob;
};


int main() {
    struct Student s = {1, "Bob", {1, 1, 2000}};
    struct Student s2 = {2,"Ronaldo",{22,7,2025}};
  
    struct Student *ptr = &s;

    // Access struct member and nested struct via pointer
    printf("Student: %s\n", ptr->name);
    printf("DOB: %02d/%02d/%d\n", ptr->dob.day, ptr->dob.month, ptr->dob.year);
    
    printf("Student: %s\n", s2.name);
    printf("DOB: %02d/%02d/%d\n", s2.dob.day, s2.dob.month, s2.dob.year);

    return 0;
}