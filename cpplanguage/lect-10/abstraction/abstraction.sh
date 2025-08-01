Abstraction in C++
Abstraction is an OOP principle where you hide implementation details and only show the essential features of an object.

In C++, abstraction is mainly achieved using:

Abstract Classes (Pure Virtual Functions)

Interfaces (classes with all pure virtual functions)

Abstraction Using Abstract Class
#include <iostream>
using namespace std;

// Abstract base class
class Shape {
public:
    virtual void draw() = 0;   // Pure virtual
    virtual double area() = 0; // Pure virtual
};

Shape provides only the interface (no implementation).

Derived classes must implement these functions.

Example Implementation:
# class Circle : public Shape {
# private:
#     double radius;
# public:
#     Circle(double r) : radius(r) {}

#     void draw() override {
#         cout << "Drawing Circle" << endl;
#     }

#     double area() override {
#         return 3.14 * radius * radius;
#     }
# };

# class Rectangle : public Shape {
# private:
#     double length, width;
# public:
#     Rectangle(double l, double w) : length(l), width(w) {}

#     void draw() override {
#         cout << "Drawing Rectangle" << endl;
#     }

#     double area() override {
#         return length * width;
#     }
# };

# int main() {
#     Shape* s1 = new Circle(5);
#     Shape* s2 = new Rectangle(4, 6);

#     s1->draw();
#     cout << "Area: " << s1->area() << endl;

#     s2->draw();
#     cout << "Area: " << s2->area() << endl;

#     delete s1;
#     delete s2;

#     return 0;
# }

2. Abstraction Using Interfaces
In C++, we don’t have a separate interface keyword like Java.

But we can simulate interfaces by creating a class with all pure virtual functions and no data members.

Benefits of Abstraction:
Hides unnecessary details from the user.

Improves code maintainability.

Promotes loose coupling.

Enhances security (internal implementation is hidden).

