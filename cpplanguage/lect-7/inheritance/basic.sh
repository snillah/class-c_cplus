What is Inheritance?

Inheritance is the process where one class (Derived/Child) acquires properties 
and behaviors of another class (Base/Parent).

Helps in code reusability and building class hierarchies.

Basic Syntax:

# class Base {
# public:
#     void display() {
#         cout << "Base class method" << endl;
#     }
# };

# class Derived : public Base {  // Inheriting from Base
# };

# int main() {
#     Derived d;
#     d.display();  // Derived class can access Base methods
# }

Types of Inheritance in C++
1.Single Inheritance
2.Multiple Inheritance
3.Multilevel Inheritance
4.Hierarchical Inheritance
5.Hybrid Inheritance

Access Specifiers in Inheritance

| Inheritance Mode | Base Public → Derived | Base Protected → Derived | Base Private → Derived |
| ---------------- | --------------------- | ------------------------ | ---------------------- |
| **Public**       | Public                | Protected                | Not inherited          |
| **Protected**    | Protected             | Protected                | Not inherited          |
| **Private**      | Private               | Private                  | Not inherited          |


Inheritance = Code reusability + "IS-A" relationship.

Types: Single, Multiple, Multilevel, Hierarchical, Hybrid.

Supports public, private, protected inheritance modes.


Hybrid Inheritance in C++
#include <iostream>
using namespace std;

// Base Class 1
class Animal {
public:
    void eat() {
        cout << "Eating..." << endl;
    }
};

// Base Class 2
class Bird {
public:
    void fly() {
        cout << "Flying..." << endl;
    }
};

// Derived Class (Intermediate)
class Dog : public Animal {
public:
    void bark() {
        cout << "Barking..." << endl;
    }
};

// Final Derived Class inheriting from Dog and Bird (Multiple + Multilevel)
class SuperDog : public Dog, public Bird {
public:
    void guard() {
        cout << "Guarding..." << endl;
    }
};

int main() {
    SuperDog sd;
    sd.eat();   // from Animal (via Dog)
    sd.bark();  // from Dog
    sd.fly();   // from Bird
    sd.guard(); // from SuperDog

    return 0;
}

Explanation:

Animal → Dog → SuperDog → Multilevel inheritance

Bird → SuperDog → Multiple inheritance

Together, this forms Hybrid inheritance.

Diamond Problem in Hybrid Inheritance:
If two base classes inherit from the same parent class, the final derived class gets duplicate copies of the grandparent class.

To avoid this, virtual inheritance is used:
class Animal { ... };
class Dog : virtual public Animal { ... };
class Cat : virtual public Animal { ... };
class SuperPet : public Dog, public Cat { ... }; // Only one Animal copy


1. Virtual Functions
A virtual function is a member function in a base class that can be overridden in a derived class.

When you call a virtual function using a base class pointer or reference, the derived class’s version runs (not the base version).

Enables runtime (dynamic) polymorphism.

#include <iostream>
using namespace std;

class Animal {
public:
    virtual void sound() {  // Virtual function
        cout << "Animal makes a sound" << endl;
    }
};

class Dog : public Animal {
public:
    void sound() override {  // Override base method
        cout << "Dog barks" << endl;
    }
};

int main() {
    Animal* a = new Dog();
    a->sound();  //  Output: Dog barks (not "Animal makes a sound")

    delete a;
    return 0;
}

Without virtual:
If we remove virtual:

a->sound() would always call Animal's version → compile-time binding.


2. Virtual Inheritance
Used to solve the diamond problem in multiple inheritance.

Ensures that only one copy of the base class is inherited.

#include <iostream>
using namespace std;

class Animal {
public:
    void eat() { cout << "Eating..." << endl; }
};

class Dog : virtual public Animal {};
class Cat : virtual public Animal {};

class SuperPet : public Dog, public Cat {};

int main() {
    SuperPet sp;
    sp.eat();  // Only one Animal copy exists
}


Usage	Purpose
virtual function	Enables dynamic polymorphism (function overriding)
virtual inheritance	Avoids multiple copies of a base class in diamond inheritance