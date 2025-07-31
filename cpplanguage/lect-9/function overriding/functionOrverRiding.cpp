#include <iostream>
 using namespace std;

 class Animal {
 public:
     virtual void sound() {   // virtual function
         cout << "Animal makes a sound" << endl;
     }
 };

 class Dog : public Animal {
 public:
     void sound() override {  // overriding
         cout << "Dog barks" << endl;
     }
 };

 int main() {
     Animal* a;
     Dog d;

     a = &d;
     a->sound();  //  Output: Dog barks (not Animal)
 }