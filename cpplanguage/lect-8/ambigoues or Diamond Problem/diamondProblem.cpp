#include <iostream>
using namespace std;

class Animal {
public:
    void eat() {
        cout << "Eating..." << endl;
    }
};

class Mammal : virtual public Animal {};
class Bird : virtual public Animal {};

class Bat : public Mammal, public Bird {};  // Diamond fixed

int main() {
    Bat b;
    b.eat();   // ✅ No ambiguity
}
