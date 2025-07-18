#include <stdio.h>


// Callback function for custom logic
void printNumber(int n) {
    printf("%d ", n);
}

void recursiveCallback(int n, void (*callback)(int)) {
    if (n == 0) return;
    callback(n);
    recursiveCallback(n - 1, callback);
}

void recursiveCB(int n, void (*callback)(int)){
    if(n ==0 ) return;
    callback(n);
    recursiveCB(n-1, callback);
}


int main() {
    recursiveCB(5, printNumber);
    return 0;
}