 Use Windows Native Threads (WinAPI)
Replace pthread.h with Windows threads using <windows.h>:

Example:

#include <windows.h>
#include <stdio.h>

DWORD WINAPI myThreadFunction(LPVOID arg) {
    printf("Hello from thread!\n");
    return 0;
}

int main() {
    HANDLE thread;
    DWORD threadId;

    thread = CreateThread(NULL, 0, myThreadFunction, NULL, 0, &threadId);

    if (thread == NULL) {
        printf("Failed to create thread.\n");
        return 1;
    }

    // Wait for the thread to finish
    WaitForSingleObject(thread, INFINITE);
    CloseHandle(thread);

    printf("Main thread exiting.\n");
    return 0;
}
✅ No pthread.h needed here. Use this for native Windows development.