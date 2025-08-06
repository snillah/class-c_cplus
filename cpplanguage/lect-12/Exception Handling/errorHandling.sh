 Exception Handling in C++
Exception Handling is a mechanism in C++ used to handle runtime errors gracefully without crashing the program.
It uses three main keywords:

try → Block of code that may throw an exception

throw → Used to raise (throw) an exception

catch → Block that handles the exception

Best Practices
Always catch exceptions by reference (to avoid copies).

Use std::exception and its derived classes.

Clean up resources (files, memory) → use RAII or smart pointers.

Would you like me to show a BankAccount example where we use exception handling for invalid withdrawals (e.g., throwing errors if balance is insufficient)?