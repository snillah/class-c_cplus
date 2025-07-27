 #include <iostream>
 using namespace std;

 class Car {
 public:
     string brand;

    //  default constructor
    Car(){
        brand ="";
        cout<< "Car default-constructor called!" << endl;
    }


     // // Parameterized Constructor
    //  Car(string b) {
    //      brand = b;
    //      cout<< "Car Parameterized constructor called!" << endl;
    //     }

        // Copy Constructor
    //     Car(Car &O){
    //         brand = O.brand;
    //         cout<< "Car Copy constructor called! :"<<brand<< endl;

    //  }

    // Constructor Overloading means having more than one constructor in the same class, each with a different parameter list.
 };
  class Shape {

 private:
     int length;
     int width;
     float pie;
     float radius;

 public:
     
     // Default constructor
     Shape() {
         length = 0;
         width = 0;
        //  pie = 3.14;
        cout<<"Default Constructor called"<<endl;
     }

     // Parameterized constructor
     Shape(float l, float w) {
         length = l;
         width = w;
     }
     Shape(float r){
        radius=r;
     }

     // Copy constructor
     Shape(const Shape& b) {
         length = b.length;
     }

     int AreaOfRectangular(){
        return length * width;
     }
     void AreaOfCircle(){
        cout<<"Area of Circle : "<<3.14*radius*radius<<endl;
     }
 };


 int main() {
    // Default Constructor called
    // Car myCar1;
    // Car myCar2;
    
    // Parameterized constructor called
    //  Car myCar("Toyota");  // Constructor automatically called
    //  cout << "Brand: " << myCar.brand << endl;

    // Copy Constructor Called
    // Car myCar("Maruthi");
    // Car mySecondCar(myCar);
    // Car myThridCar(mySecondCar);

    Shape rect;
    int result = rect.AreaOfRectangular();
    cout<<"result :"<<result<<endl;

    Shape circle(6);
    circle.AreaOfCircle();

     return 0;
 }
