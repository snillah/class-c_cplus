 #include <iostream>
using namespace std;

// Base class
class Animal {
protected:
    string name;

public:
    Animal(string n) : name(n) {}
    // Virtual function for polymorphism

    // virtual void speak() {
    //     cout << name << " makes a sound." << endl;
    // }

    virtual void speak() = 0;  // Pure virtual function
    // it uses : like you have to redefine the same function in the child class if not it will throw error
    ~Animal(){
        // cout<<"destructor called"<<endl;
    }
};

// Derived class 1
class Dog : public Animal {
public:
    Dog(string n):Animal(n) {}

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
