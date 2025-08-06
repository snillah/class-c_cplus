Encapsulation in C++

Encapsulation is an OOP principle where data (variables) and
functions (methods) are bundled together inside a class, while restricting direct access to the internal data.

This is done using access specifiers (private, protected, public) to control how data is accessed or modified.


Key Features of Encapsulation

Data Hiding → Internal details are hidden from the outside world.

Controlled Access → Data is accessed or modified through getter/setter methods.

Improves Security → Prevents unauthorized or accidental changes.

Improves Maintainability → Changes to internal implementation don’t affect external code.

Security and Integrity
Ensures data is not corrupted by invalid external changes.

Example: Prevents setting a negative balance directly.

Ease of Change
Internal implementation can change without breaking external code.

(e.g., You can change how balance is stored, but public methods stay same.)


What Encapsulation Requires:

To properly encapsulate a class in C++, you need:

Private or Protected Data Members

Data is hidden from outside the class.

Public Methods (Getters/Setters)

To control access to the private data.

Access Specifiers (private, protected, public)

To enforce restricted access.

What Encapsulation Actually Does:

