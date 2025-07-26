#include <iostream>
using namespace std;

// Template with two different types
template <typename A, typename B>
void display(A x, B y) {
    cout << "T type: " << x << " | U type: " << y << endl;
}

template <typename T, typename U>
auto add(T a, U b) -> decltype(a + b) {
    return a + b;
}
// This uses decltype to deduce return type of two mixed types (e.g., int + float returns float).

int main() {
    display(10, 'A');        // int and char
    display(3.14, 42);       // double and int
    display("Hello", 5.5);   // const char* and double

    cout<<"display value"<<add(10,3.14);
    return 0;
}
