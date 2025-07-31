#include <iostream>
using namespace std;

// Base class
class Shape {
public:
    void draw() {
        cout << "Drawing a shape" << endl;
    }
};

// Derived class 1 - Circle
class Circle : public Shape {
public:
    void area(float radius) {
        cout << "Area of Circle: " << 3.14 * radius * radius << endl;
    }
};

// Derived class 2 - Rectangle
class Rectangle : public Shape {
public:
    void area(float length, float width) {
        cout << "Area of Rectangle: " << length * width << endl;
    }
};

// Derived class 3 - Triangle
class Triangle : public Shape {
public:
    void area(float base, float height) {
        cout << "Area of Triangle: " << 0.5 * base * height << endl;
    }
};

int main() {
    Circle c;
    Rectangle r;
    Triangle t;

    c.draw();
    c.area(5);

    r.draw();
    r.area(4, 6);

    t.draw();
    t.area(3, 7);

    return 0;
}
