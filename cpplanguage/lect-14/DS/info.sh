1. What is a Data Structure?
A data structure is a way to organize, store, and manage data.
it maintain data efficiently so operations (like searching, inserting, deleting) can be performed quickly.

Think of it as the “storage format + rules” for your data.
Example: Books in a library can be arranged alphabetically (like an array) or by subject (like a map).

2. Types of Data Structures in C++

C++ supports two broad categories:

A. Built-in (Primitive) Data Structures
   int, float, char, bool → Basic types

   Pointers → Store memory addresses

B. Abstract / Non-Primitive Data Structures
These are user-defined or STL-provided structures:

1. Linear Data Structures (data stored in sequence)
Array → Fixed-size, index-based

Vector (STL) → Dynamic array

Stack → LIFO (Last In, First Out)

Queue → FIFO (First In, First Out)

Deque → Double-ended queue

Linked List → Nodes connected with pointers

2. Non-Linear Data Structures (data connected in multiple ways)
Tree → Hierarchical (Binary tree, BST, etc.)

Graph → Nodes (vertices) connected by edges

3. Hash-based
Hash Table / Unordered Map → Key-value storage



2. Key Features
Dynamic size (unlike arrays)

Insert / Remove at both front and back efficiently

Random access to elements (like an array)

Implemented internally as a dynamic array of fixed-size arrays (not a single block like vector)

🔹 3. Common Functions
Function	Description
push_back(x)	Add to back
push_front(x)	Add to front
pop_back()	Remove from back
pop_front()	Remove from front
front()	First element
back()	Last element
at(i)	Access at index
size()	Number of elements
clear()	Remove all