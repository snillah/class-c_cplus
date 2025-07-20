
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
