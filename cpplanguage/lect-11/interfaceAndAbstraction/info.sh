In C++, there’s no dedicated interface keyword like in Java or C#.

Instead, an interface is typically implemented using an abstract class that:

Contains only pure virtual functions (= 0).

Has no data members (or minimal).

Acts as a contract/blueprint for derived classes.



Key Points About Interfaces
An interface is just an abstract class with all pure virtual functions.

Any class implementing this interface must override all functions.

Supports multiple inheritance (a class can implement multiple interfaces).

Used for runtime polymorphism.


Difference Between Abstract Class and Interface:

| Feature              | Abstract Class                      | Interface                          |
| -------------------- | ----------------------------------- | ---------------------------------- |
| Data Members         | Can have                            | Typically none                     |
| Function Type        | Can have both normal & pure virtual | Only pure virtual                  |
| Multiple Inheritance | Not commonly used                   | Often used for multiple interfaces |
| Purpose              | Partial abstraction                 | Full abstraction (contract)        |
