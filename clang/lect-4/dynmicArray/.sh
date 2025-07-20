What is a Dynamic Array in C?
A dynamic array is an array whose size can be changed at runtime, 
unlike a regular (static) array which must have a fixed size known at compile-time.

Why Use a Dynamic Array?
You don’t know in advance how many elements you'll need.

You want to grow or shrink the array while the program is running.

Saves memory by allocating only what you need.

Feature	     Static Array	        Dynamic Array
Size	     Fixed at compile-time	Defined at runtime
Memory	     Allocated on stack	    Allocated on heap
Flexibility	 Rigid	                Flexible (can resize)
Syntax	     int arr[10];	        Use malloc/realloc


How to Create a Dynamic Array in C
Step-by-step example:

#include <stdio.h>
#include <stdlib.h>

int main() {
    int *arr;
    int n;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    // Allocate memory for n integers
    arr = (int*)malloc(n * sizeof(int));

    // Check if memory allocation failed
    if (arr == NULL) {
        printf("Memory not allocated.\n");
        return 1;
    }

    // Input values
    for (int i = 0; i < n; i++) {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    // Display values
    printf("You entered: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    // Free the memory
    free(arr);

    return 0;
}

Key Functions
Function	Purpose
malloc()	Allocates memory dynamically
calloc()	Allocates and initializes to zero
realloc()	Resizes previously allocated memory
free()	Frees up the memory

Resizing the Array
You can resize a dynamic array with realloc:

c
Copy
Edit
arr = realloc(arr, newSize * sizeof(int));
Be sure to check if realloc() returns NULL.

