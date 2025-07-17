#include<stdio.h>
#include<string.h> //it used to handle the string concat

int main() {
    char str1[10]="hello";
    char str2[10]="world";
    strcat(str1,str2);
    printf("%s",str1);
    return 0;
}



