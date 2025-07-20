
Thread

In C, threads allow you to run multiple tasks concurrently within the same process. 
The most common way to work with threads in C (on Unix-like systems like Linux or macOS) is using the POSIX Threads library

Basic Thread Example

#include <stdio.h>
#include <pthread.h>

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

Key Functions
Function	Description
pthread_create()	Creates a new thread
pthread_join()	Waits for a thread to finish
pthread_exit()	Terminates the current thread
pthread_self()	Returns the ID of the calling thread
pthread_mutex_*	Functions to lock/unlock mutexes (for thread safety)

Why Threads in C?
Threads allow a program to do multiple things at the same time (concurrently). 
Instead of waiting for one task to finish before starting another, 
you can split tasks into independent units (threads) that run in parallel (on multi-core CPUs) or concurrently 
(on a single core via time-sharing).


Use Cases of Threads in C

1. Multithreaded Servers
Each client connection handled by a separate thread.

Example: Web server, chat server.

2. Parallel Data Processing
Large datasets processed in chunks by multiple threads.

Example: Matrix multiplication, image processing.

3. Background Tasks
File downloading, logging, or data saving without blocking the main task.

Example: Game engines or desktop apps.

4. Real-time Systems
Use threads for tasks like reading sensor data, updating displays, and controlling motors.

Example: Embedded systems, robotics.

5. Asynchronous Tasks
Avoid waiting for a slow operation (like reading a large file).

Example: Reading data from disk while user interacts with the UI.















