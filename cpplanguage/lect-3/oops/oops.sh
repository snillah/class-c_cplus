What is OOPs in C++?
OOPs stands for Object-Oriented Programming System.
It's a programming style used in C++ (and other languages) 
where objects and classes are used to design programs.

OOP helps you organize complex programs using real-world concepts like:

Object

Class

Inheritance

Encapsulation

Abstraction

Polymorphism


Key OOP Concepts in C++

| Concept           | Meaning                                                        | Example                                         |
| ----------------- | -------------------------------------------------------------- | ----------------------------------------------- |
| **Class**         | Blueprint or template for creating objects                     | `class Car {}`                                  |
| **Object**        | Instance of a class (real-world entity)                        | `Car myCar;`                                    |
| **Encapsulation** | Hiding internal data using `private`, and exposing via methods | `private speed; public setSpeed()`              |
| **Inheritance**   | One class gets features from another class                     | `class oilCar : public car space`                     |
| **Polymorphism**  | One function behaves differently for different objects         | `mileage()` works differently for `pertrolCard` 
                                                                                        and `dieselCar` |
| **Abstraction**   | Hiding complex details and showing only essentials             | Interfaces, virtual functions                   |


Simple C++ OOP Example:

#include <iostream>
using namespace std;

// Class definition

class Car {
private:
    int speed;

public:
    void setSpeed(int s) {
        speed = s;
    }

    void showSpeed() {
        cout << "Speed is: " << speed << " km/h" << endl;
    }
};

int main() {
    Car myCar;           // Object creation
    myCar.setSpeed(80);  // Call method
    myCar.showSpeed();   // Output: Speed is: 80 km/h
    return 0;
}

Why OOP is Important?

Real-world modeling

Code reusability (inheritance)

Better code organization

Easy to maintain and extend