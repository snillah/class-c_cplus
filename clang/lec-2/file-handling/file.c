#include <stdio.h>


int main(){

    FILE *fp;
    char c;

    fp = fopen("flex.text","w");
    if(fp == NULL)
    {
        printf("\n File cannot open or File not Found...");
        return 1;
    }

    //write conent to the file
    fprintf(fp,"Hello, hi\n");
    fprintf(fp,"Writing to a file in C using VS Code!\n");
    
    fclose(fp); //close the file
    
    FILE *f;

    f = fopen("flex.text","r");

    if(f == NULL)
    {
        printf("\n File cannot open or File not Found...");
        return 1;
    }

    // Read command
    printf("\n File Content :\n");
    while((c = fgetc(f)) != EOF){
        putchar(c);
    }

    fclose(f); //close the file

    printf("Data written and read successfully.\n");


    return 0;
}