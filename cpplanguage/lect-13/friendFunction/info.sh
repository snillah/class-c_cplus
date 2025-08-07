Friend Function
A friend function can access private and protected members of a class even though it's not a member of that class.



Key Points:
Declared inside class with the friend keyword.

Defined like a normal function (outside the class).

Helps when two or more classes need to work closely.


| Concept           | Static Data Member                | Friend Function                          |
| ----------------- | --------------------------------- | ---------------------------------------- |
| Belongs to        | The class (shared by all objects) | Not a class member                       |
| Access to private | No (unless it's inside the class) | Yes (even though it’s outside the class) |
| Keyword           | `static`                          | `friend`                                 |
| Use case          | Shared data among all objects     | External function needing private access |
