#include<stdio.h>

// This is while loop
// int main() {
//     int i = 0;
//         printf("\nThe while loop in C is a control flow statement that allows a block of code to be executed repeatedly as long as a specified condition remains true. It is an entry-controlled loop, meaning the condition is evaluated before the loop body is executed.\n");
//         while(i<20){
//             printf("%d\n",i);
//             i++;
//         }
//     return 0;
//     }

// This is Do while loop
    

    // int main() {
    // int i = 0;
    //     printf("\nThe do-while loop in C is a control flow statement that executes a block of code at least once before checking a given condition. If the condition evaluates to true, the loop continues to execute; otherwise, it terminates. This makes it an exit-controlled loop, as the condition is checked at the end of each iteration. \n");
    //     do{
    //         printf("%d\n",i);
    //         i++;
    //     }
    //     while(i<20);
    // return 0;
    // }

// This is for loop
/*
for (initialization; condition; increment/decrement) {
    // body of the loop
    // statements to be executed repeatedly
}*/
    int main() {
    int i = 0;
        printf("\nThe for loop in C is a control flow statement used for iterative execution of a block of code. It is particularly useful when the number of iterations is known or can be determined before the loop begins. \n");
        for(i=0;i<20;i++){
            printf("%d\n",i);
        }
    return 0;
    }
