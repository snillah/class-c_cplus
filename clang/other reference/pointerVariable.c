#include <stdio.h>

int main(){
    int x = 5;
    int *px = &x;
    int y =x;

    int a = *px;
    a=a + 10;
    printf("a:%d,x:%d\n",a,x);
    y =15;

    printf("a:%d,x:%d,y:%d",a,x,y);
}