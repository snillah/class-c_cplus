What is Function Overriding in C++?
Function overriding happens when a derived class defines a function with the same name, 
return type, and parameters as a function in its base class.

It is mainly used with inheritance and virtual functions to achieve runtime polymorphism.

Key Points:
Must be in inheritance (base → derived).

Function signature must match exactly.

Base class function must be marked virtual (recommended).

Resolved at runtime (not compile time).

# #include <iostream>
# using namespace std;

# class Animal {
# public:
#     virtual void sound() {   // virtual function
#         cout << "Animal makes a sound" << endl;
#     }
# };

# class Dog : public Animal {
# public:
#     void sound() override {  // overriding
#         cout << "Dog barks" << endl;
#     }
# };

# int main() {
#     Animal* a;
#     Dog d;

#     a = &d;
#     a->sound();  //  Output: Dog barks (not Animal)
# }

Explanation:
sound() in Dog overrides sound() in Animal.

Using virtual + override ensures runtime binding via the vtable.

Without virtual, it would not override but hide the base method (compile-time binding).

Difference Between Overloading and Overriding

| Feature          | Overloading             | Overriding                         |
| ---------------- | ----------------------- | ---------------------------------- |
| **Scope**        | Same class              | Base → Derived class               |
| **Parameters**   | Must be **different**   | Must be **same**                   |
| **Return Type**  | Can differ (if allowed) | Must be **same**                   |
| **Polymorphism** | Compile-time (Static)   | Runtime (Dynamic)                  |
| **Keyword**      | No `virtual` needed     | Needs `virtual` (for polymorphism) |


