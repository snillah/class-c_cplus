Looping in C++

a. for loop:

# for (int i = 0; i < 5; i++) {
#     cout << i << " ";
# }

b. while loop:
# int i = 0;
# while (i < 5) {
#     cout << i << " ";
#     i++;
# }
c. do...while loop:

# int i = 0;
# do {
#     cout << i << " ";
#     i++;
# } while (i < 5);


Branching in C++
Branching means making decisions in the code using conditions.

a. if statement:
# int a = 10;
# if (a > 5) {
#     cout << "Greater than 5";
# }
 b. if...else:
#  int a = 3;
# if (a > 5) {
#     cout << "Greater";
# } else {
#     cout << "Smaller";
# }
 c. else if:
#  int a = 5;
# if (a > 5) {
#     cout << "Greater";
# } else if (a == 5) {
#     cout << "Equal";
# } else {
#     cout << "Smaller";
# }
d. switch statement:
# int choice = 2;
# switch (choice) {
#     case 1:
#         cout << "One";
#         break;
#     case 2:
#         cout << "Two";
#         break;
#     default:
#         cout << "Other";
# }

In switch case we cannot do like this
# int age = 5;
# switch(age) {
#     case if (age > 18):   // Not allowed
#         cout << "Voting eligible" << endl;
#         break;
# }
write like this
# int age = 20;
# switch (1) {  // dummy value to enter switch
#     case 1:
#         if (age >= 18) {
#             cout << "Voting eligible" << endl;
#         } else {
#             cout << "Not eligible" << endl;
#         }
#         break;
# }


| Concept  | Example                      | Use            |
| -------- | ---------------------------- | -------------- |
| Function | `int add(int a, int b)`      | Reuse code     |
| Loop     | `for`, `while`, `do...while` | Repeat actions |
| Branch   | `if`, `else`, `switch`       | Make decisions |

