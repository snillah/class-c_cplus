A . What is a Constructor in C++?

A constructor is a special function inside a class 
that is automatically called when you create an object of that class.


B .Key Features:

Has the same name as the class.

No return type (not even void).

Used to initialize objects and their member variables.

# #include <iostream>
# using namespace std;

# class Car {
# public:
#     string brand;

#     // Constructor
#     Car(string b) {
#         brand = b;
#         cout << "Car constructor called!" << endl;
#     }
# };

# int main() {
#     Car myCar("Toyota");  // Constructor automatically called
#     cout << "Brand: " << myCar.brand << endl;
#     return 0;
# }

Car constructor called!  // when ever you creating a constructor it will run the contructor initially
Brand: Toyota

C .Types of Constructors

| Type                          | Description                                                  |
| ----------------------------- | ------------------------------------------------------------ |
| **Default Constructor**       | Takes no parameters                                          |
| **Parameterized Constructor** | Takes parameters to initialize variables                     |
| **Copy Constructor**          | Initializes an object using another object of the same class |

In class using these three parameters is called constructor Overloading
| **Constructor Overloading**   | Multiple constructors with different parameters |

Constructor Overloading means having more than one constructor in the same class, each with a different parameter list.

It allows you to create objects in different ways depending on how much information you provide when creating the object.



# class Box {
# public:
#     int length;

#     // Default constructor
#     Box() {
#         length = 0;
#     }

#     // Parameterized constructor
#     Box(int l) {
#         length = l;
#     }

#     // Copy constructor
#     Box(const Box& b) {
#         length = b.length;
#     }
# };

| Feature              | Constructor | Normal Function |
| -------------------- | ----------- | --------------- |
| Same name as class   | Yes          | No                |
| Called automatically | Yes          | No               |
| Return type          | Yes          | Must have     |
| Overloading          | Yes          | Yes           |



