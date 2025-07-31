
// Multiple inheritance is an OOP feature in which a derived (child) class inherits from more than one base (parent) class.

// This allows a class to combine features of multiple classes, promoting code reuse.

#include <iostream>
using namespace std;

// SINGLE INHERITANCE


// Base class\Super class\Parent class
class Father{
protected:

public:
    void House()  {
        cout << " Father's House Access!" << endl;
    }
    void Bike() {
        cout << " Father's Bike Access!" << endl;
    }
    
};


// Base class\Super class\Parent class
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
    s1.Foods();
    s1.Golds();
    s1.House();
    
    return 0;
}
