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
