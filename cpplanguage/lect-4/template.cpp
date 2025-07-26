#include <iostream>
using namespace std;

// Function template
template <typename T>
// T findMax(T a, T b) {
    //     return (a > b) ? a : b;
    // }
    void findMax(T a,T b){
        cout<<"display :"<<a<<b<<endl;
    }

template <typename T>
void findValue(T x,T y){
    cout <<"value :"<<x<<y;
}

int main() {
    // cout << "Max of 10 and 20: " << findMax(10, 20) << endl;        // int
    // cout << "Max of 5.5 and 2.3: " << findMax(5.5, 2.3) << endl;    // double
    // cout << "Max of 'A' and 'Z': " << findMax('A', 'Z') << endl;    // char
    findMax(10,29);
    findValue('A', 'Z');
    return 0;
}

// What is a Template?
// Templates allow you to write generic code that works with any data type.

// template <typename T> → T is a placeholder for any data type.

// At compile time, the compiler generates code for the actual data types used.

// Why the Error Happened?
// T is a placeholder defined only inside template functions.

// If you try to use T in a non-template function, the compiler doesn't recognize it.
// void findValue(T x,T y){  //Error: 'T' is unknown here
//     cout <<"value :"<<x<<y;
// }

// // Function template
// template <typename T>
// void findMax(T a, T b) {
//     cout << "display: " << a << " " << b << endl;
// }

// // Fix: make findValue a template too
// template <typename T>
// void findValue(T x, T y) {
//     cout << "value: " << x << " " << y << endl;
// }