 C++ Example: Inheritance + Polymorphism

Syntax:
class Base {
    // properties and methods
};

class Derived : public Base {
    // inherits from Base
};




 #include <iostream>
using namespace std;

// Base class
class Animal {
protected:
    string name;

public:
    Animal(string n) : name(n) {}

    // Virtual function for polymorphism
    virtual void speak() {
        cout << name << " makes a sound." << endl;
    }
};

// Derived class 1
class Dog : public Animal {
public:
    Dog(string n) : Animal(n) {}

    void speak() override {
        cout << name << " barks!" << endl;
    }
};

// Derived class 2
class Cat : public Animal {
public:
    Cat(string n) : Animal(n) {}

    void speak() override {
        cout << name << " meows!" << endl;
    }
};

int main() {
    Animal* a1 = new Dog("Tommy");
    Animal* a2 = new Cat("Kitty");

    a1->speak();  // Output: Tommy barks!
    a2->speak();  // Output: Kitty meows!

    delete a1;
    delete a2;

    return 0;
}

What is Base and Derived Class in C++?
| Term                      | Meaning                                                                                             |
| ------------------------- | --------------------------------------------------------------------------------------------------- |
| **Base Class** (Parent)   | The class that gives its properties and methods to another class.                                   |
| **Derived Class** (Child) | The class that **inherits** from the base class. It can add new features or override existing ones. |



Concepts Used:
| Concept              | How it's used                                                 |
| -------------------- | ------------------------------------------------------------- |
| **Inheritance**      | `Dog` and `Cat` inherit from `Animal`                         |
| **Polymorphism**     | `speak()` is **overridden** differently in each derived class |
| **Virtual function** | Enables **runtime polymorphism**                              |


Access Specifiers in Inheritance:

class Derived : public Base     // public inheritance
class Derived : protected Base  // protected inheritance
class Derived : private Base    // private inheritance

Public inheritance is most common:
public members in Base → stay public in Derived

 1. Inheritance vs. Polymorphism
 | Feature              | Inheritance                                                   | Polymorphism                                                 |
| -------------------- | ------------------------------------------------------------- | ------------------------------------------------------------ |
| Meaning              | One class (derived) **inherits** features from another (base) | One **function behaves differently** depending on the object |
| Purpose              | Code **reuse**                                                | Code **flexibility** and **dynamic behavior**                |
| Example in your code | `Dog` inherits from `Animal`                                  | `speak()` works differently for `Dog` and `Cat`              |
| Type                 | Structural relationship                                       | Behavioral flexibility                                       |


Inheritance Example (No Polymorphism)
class Animal {
public:
    void eat() {
        cout << "Animal eats." << endl;
    }
};

class Dog : public Animal {
public:
    void bark() {
        cout << "Dog barks." << endl;
    }
};

o/p
Dog inherits eat() from Animal.

But no polymorphism: no overridden behavior or virtual function.

Polymorphism Example

Add virtual function to base class:

class Animal {
public:
    virtual void speak() {
        cout << "Animal makes sound." << endl;
    }
};

class Dog : public Animal {
public:
    void speak() override {
        cout << "Dog barks." << endl;
    }
};

Animal* a = new Dog();
a->speak();  // 🔥 Output: Dog barks (not Animal sound!)

What’s happening?
Without virtual, a->speak() would call base Animal::speak().

With virtual, it checks the real object type at runtime (Dog) → calls Dog::speak().

Report :
| Aspect              | Inheritance                          | Polymorphism                               |
| ------------------- | ------------------------------------ | ------------------------------------------ |
| What it gives       | Reuse of properties & methods        | Overridden behavior                        |
| When used           | Class hierarchy                      | Function override                          |
| Example             | `Dog` inherits `eat()` from `Animal` | `Dog::speak()` overrides `Animal::speak()` |
| Requires `virtual`? |  No                                  |  Yes (for runtime polymorphism)           |

