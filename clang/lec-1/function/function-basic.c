#include <stdio.h>

/*
Syntax
return_type function_name(parameter_list) {
    // Function body: statements to execute
    // Optionally, a return statement
}
*/
int z = 100; //Global scope

void display(){
    static int count = 0;//static scope
    count++;
    printf("\n count = %d",count);
}


// function declaration 
int add(int a, int b){
    return a + b; // return the sum of a and b
}

int main(){
    int x =5,y=4; //local scope

    int sum = add(x,y); //Function call
    printf("\n sum = %d, %d",sum,z); 
    display();
    return 0;
}