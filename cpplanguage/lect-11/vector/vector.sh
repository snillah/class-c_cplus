In C++, a vector is a dynamic array provided by the STL (Standard Template Library). Unlike regular arrays, vectors can:

Grow or shrink in size dynamically

Provide many built-in functions (add, remove, search)

Automatically handle memory management



 Common Vector Functions:

| Function             | Description                       |
| -------------------- | --------------------------------- |
| `push_back(x)`       | Adds element `x` at end           |
| `pop_back()`         | Removes last element              |
| `size()`             | Returns number of elements        |
| `empty()`            | Checks if vector is empty         |
| `clear()`            | Removes all elements              |
| `insert(pos, x)`     | Inserts `x` at given position     |
| `erase(pos)`         | Removes element at given position |
| `front()` / `back()` | First / Last element              |
| `begin()` / `end()`  | Iterators to start and end        |


Vector using Class using to store multiple accounts dynamically 

Used vector<BankAccount> to store multiple accounts dynamically.

push_back() adds objects to the vector.

Accessed elements with accounts[index].

Used a loop to show balances of all accounts.