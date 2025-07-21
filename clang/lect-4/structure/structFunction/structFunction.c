#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct Employee{
    int Id;
    char name[50];
    float salary;
};

// Function to create a new Employee
struct Employee* createEmployee(int id,char* name,float salary){
    struct Employee* emp =(struct Employee*)malloc(sizeof(struct Employee));
    emp->Id =id;
    strcpy(emp->name,name);
    emp->salary =salary;
    return emp;
}
// Function to display employee details
void displayEmployee(struct Employee* emp ){
    printf("Id:%d\n Name:%s\n Salary:%.2f\n",emp->Id,emp->name,emp->salary);
}

int main(){
    struct Employee* emp1 = createEmployee(1,"User1",85.5);
    struct Employee* emp2 = createEmployee(2,"User2",95.5);

    displayEmployee(emp1);
    displayEmployee(emp2);
}