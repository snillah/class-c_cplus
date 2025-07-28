Destructor in C++

A destructor is a special member function of a class that is automatically called when an object is destroyed.

Used to clean up resources (memory, files, database connections).

Same name as class but with a tilde ~.

Takes no arguments and has no return type.

#include <iostream>
using namespace std;

class Student {
public:
    Student() {
        cout << "Constructor called!" << endl;
    }
    
    ~Student() {  // Destructor
        cout << "Destructor called!" << endl;
    }
};

int main() {
    Student s1;  // Constructor runs here
}  // Destructor automatically runs here

# Constructor called!
# Destructor called!

Example with Dynamic Memory:

class Example {
private:
    int* data;
public:
    Example() {
        data = new int[5]; // allocate memory
        cout << "Memory allocated" << endl;
    }
    ~Example() {
        delete[] data;     // free memory
        cout << "Memory freed" << endl;
    }
};
