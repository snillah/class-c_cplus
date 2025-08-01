Polymorphism in C++
Polymorphism means one interface, multiple behaviors.
It allows the same function call to behave differently based on the object type.


Types of Polymorphism:
Compile-time Polymorphism → Function Overloading / Operator Overloading

Runtime Polymorphism → Function Overriding (using virtual functions)

Runtime Polymorphism:
# #include <iostream>
# using namespace std;

# // Base class
# class Shape {
# public:
#     virtual void draw() {  // virtual enables runtime polymorphism
#         cout << "Drawing a generic shape" << endl;
#     }
# };

# // Derived class 1
# class Circle : public Shape {
# public:
#     void draw() override {
#         cout << "Drawing a Circle" << endl;
#     }
# };

# // Derived class 2
# class Rectangle : public Shape {
# public:
#     void draw() override {
#         cout << "Drawing a Rectangle" << endl;
#     }
# };

# int main() {
#     Shape* shape1 = new Circle();    // Base pointer → Circle object
#     Shape* shape2 = new Rectangle(); // Base pointer → Rectangle object

#     shape1->draw();  // ✅ Output: Drawing a Circle
#     shape2->draw();  // ✅ Output: Drawing a Rectangle

#     delete shape1;
#     delete shape2;
#     return 0;
# }

Explanation:
Base pointer (Shape*) can point to different derived objects.

Because draw() is virtual, the program uses dynamic dispatch:

If pointing to Circle → calls Circle::draw

If pointing to Rectangle → calls Rectangle::draw

This is runtime polymorphism.


Report : 
Compile-time: Same function name but different parameters (add(int,int) / add(float,float)).

Runtime: Same function name overridden in derived classes, chosen at runtime using virtual.


Key Points:

A pure virtual function forces derived classes to implement it.

You cannot create an object of Shape (abstract class).

Used to define an interface or blueprint for derived classes.

Supports runtime polymorphism.

Difference Between Virtual and Pure Virtual:
| Feature                  | Virtual Function               | Pure Virtual Function                 |
| ------------------------ | ------------------------------ | ------------------------------------- |
| **Definition**           | Has a body (implementation)    | No body (`= 0`)                       |
| **Abstract Class**       | Base class can be instantiated | Base class **cannot** be instantiated |
| **Override Requirement** | Optional                       | **Mandatory** in derived class        |
