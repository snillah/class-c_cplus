#include <stdio.h>
// #include <pthread.h>

// Function to be executed by the thread
void* myThreadFunction(void* arg) {
    printf("Hello from thread! Argument: %d\n", *(int*)arg);
    return NULL;
}

int main() {
    pthread_t threadId;
    int value = 42;

    // Create a new thread
    if (pthread_create(&threadId, NULL, myThreadFunction, &value)) {
        printf("Error creating thread\n");
        return 1;
    }

    // Wait for the thread to finish
    pthread_join(threadId, NULL);

    printf("Thread has finished execution\n");
    return 0;
}