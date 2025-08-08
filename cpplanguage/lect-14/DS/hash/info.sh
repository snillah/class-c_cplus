 1. What is a Hash-based Data Structure?
A hash-based structure stores data in a way that allows fast access using a key.
It uses a hash function to map the key to an index in a hash table.

Example:

Key → "apple"

Hash function → hash("apple") % table_size

Store value at that index.

2. Hash-based Structures in C++
C++ provides unordered containers in <unordered_map> and <unordered_set> (since C++11):

A.unordered_map

Stores key–value pairs.

Keys are unique.

Hash table internally.

B.unordered_set

Stores only keys (no values).

Keys are unique.

Hash table internally.


5. Advantages of Hash-based Structures
 O(1) average time complexity for insert, search, and delete.
 Easy to store and retrieve data using keys.

🔹 6. Disadvantages
    No ordering (elements are stored in arbitrary order).

    Worst-case time can be O(n) if many keys hash to the same index (collisions).