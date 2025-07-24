Variables in C++
Definition: A variable is a name given to a memory location to store a value that can be changed during program execution.
Syntax:
<datatype> <variable_name> = <value>;

 Examples:
int age = 25;
float pi = 3.14;
char grade = 'A';
string name = "John";  // needs `#include <string>`

Common Data Types:
| Data Type | Description                      | Example               |
| --------- | -------------------------------- | --------------------- |
| `int`     | Integer                          | `int x = 10;`         |
| `float`   | Decimal (single-precision)       | `float y = 5.75;`     |
| `double`  | Decimal (double-precision)       | `double z = 3.14159;` |
| `char`    | Single character                 | `char c = 'A';`       |
| `bool`    | Boolean                          | `bool flag = true;`   |
| `string`  | Text (needs `#include <string>`) | `string s = "Hi";`    |

Rules for Variable Names:

Must start with a letter or underscore _

Cannot start with a digit

Cannot be a keyword

No special characters (@, #, etc.)

Case-sensitive (Name ≠ name)


