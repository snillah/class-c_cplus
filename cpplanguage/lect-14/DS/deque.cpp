// A Deque (Double-Ended Queue) is a sequence container that allows insertion and deletion from both ends — front and back.

// Think of it like a queue + stack combined.

// It is available in C++ STL:


#include <iostream>
#include <deque>
using namespace std;

int main() {
    deque<int> dq;

    // Insert elements
    dq.push_back(10);   // [10]
    dq.push_front(20);  // [20, 10]
    dq.push_back(30);   // [20, 10, 30]

    // Display
    cout << "Deque elements: ";
    for(int x : dq)
        cout << x << " ";
    cout << endl;

    // Remove elements
    dq.pop_front(); // Removes 20 → [10, 30]
    dq.pop_back();  // Removes 30 → [10]

    cout << "After pops: ";
    for(int x : dq)
        cout << x << " ";
    cout << endl;

    // Access elements
    cout << "Front: " << dq.front() << endl;
    cout << "Back: " << dq.back() << endl;

    return 0;
}

//  When to Use a Deque?
// When you need fast insertion/deletion at both ends

// When you also want random access (unlike list)

// Examples:

// Sliding window problems

// Task scheduling systems

// Undo/Redo feature in text editors

