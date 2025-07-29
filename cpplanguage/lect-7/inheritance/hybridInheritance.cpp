
// Hybrid inheritance is a combination of two or more types of inheritance (single, multiple, multilevel, hierarchical) in one program.

// It is used when a class needs to derive functionality from different inheritance patterns.

// Hybrid Inheritance (Multiple + Multilevel)


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

class Mother {
protected:

public:
    void Foods()  {
        cout << " Mother's Foods Access!" << endl;
    }
    void Golds() {
        cout << " Mother's Golds Access!" << endl;
    }
    
};

// Derived class\Sub Class\Child Class
class SON : public Father,public Mother {
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
    s1.Foods();
    s1.Golds();
    s1.Land();
    
    return 0;
}