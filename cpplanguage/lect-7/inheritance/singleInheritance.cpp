#include <iostream>
using namespace std;

// SINGLE INHERITANCE


// Base class\Super class\Parent class
class Father {
protected:
    string name;

public:
    void House()  {
        cout << name << " Father's House Access!" << endl;
    }
    void Bike() {
        cout << name << " Father's Bike Access!" << endl;
    }
    
};

// Derived class\Sub Class\Child Class
class SON : public Father {
public:
    void Mobile() {
        cout << name << " Own Mobile Access !" << endl;
    }
};


int main() {
    SON s1;
    s1.Mobile(); 
    s1.House();
    s1.Bike();
    
    return 0;
}
