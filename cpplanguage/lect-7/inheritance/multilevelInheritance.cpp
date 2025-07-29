
// Multilevel inheritance is when a class is derived from another derived class, forming a chain of inheritance.

// This creates a grandparent → parent → child relationship.



#include <iostream>
using namespace std;

// SINGLE INHERITANCE


// Base class\Super class\Parent class
class GrandFather {
protected:
public:
    void Land()  {
        cout << " Grand Father's Land Access!" << endl;
    }
    
};

class Father : public GrandFather{
protected:

public:
    void House()  {
        cout << " Father's House Access!" << endl;
    }
    void Bike() {
        cout << " Father's Bike Access!" << endl;
    }
    
};

// Derived class\Sub Class\Child Class
class SON : public Father {
public:
    void Mobile() {
        cout << " Own Mobile Access !" << endl;
    }
};


int main() {
    SON s1;
    s1.Mobile(); 
    s1.House();
    s1.Bike();
    s1.Land();
    
    return 0;
}
