#include <stdio.h>
void changeValue(int x);
void changeReference(int *x);

int main()
{
    int a = 5;
    /*Call by Value
    What It Means:
    A copy of the variable is passed to the function.
    Changes made inside the function do not affect the original variable.
    */
    changeValue(a);
    printf("OutSide function : x= %d\n", a);
    /*
    Call by Reference
    What It Means:
    The address of the variable is passed.
    Changes made inside the function do affect the original variable.
    */
    changeReference(&a);
    printf("OutSide function : x= %d\n", a);
    return 0;
}

// Call by Value
void changeValue(int x)
{
    x = x + 10;
    printf("Inside function : x= %d\n", x);
}

// Call by Reference
void changeReference(int *x)
{
    *x = x + 10;
    printf("Inside function : x= %d\n", *x);
}