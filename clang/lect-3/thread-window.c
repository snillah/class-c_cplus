#include <windows.h>
#include <stdio.h>

DWORD WINAPI myThreadFunction(LPVOID param) {
    int* val = (int*)param; // cast LPVOID to int*
    printf("Thread received: %d\n", *val);
       return 0;
}

int main() {
    int number = 42;
    HANDLE thread;
    DWORD threadId;

    thread = CreateThread(
        NULL,          // default security attributes
        0,             // default stack size
        myThreadFunction, // thread function
        &number,       // parameter to thread function
        0,             // default creation flags
        &threadId      // receives the thread identifier
    );

    WaitForSingleObject(thread, INFINITE);
    CloseHandle(thread);
    return 0;
}

// | Component | Meaning                                           |
// | --------- | ------------------------------------------------- |
// | `DWORD`   | Return type (exit code)                           |
// | `WINAPI`  | Calling convention for Windows API                |
// | `LPVOID`  | Generic pointer to pass any data (cast as needed) |
