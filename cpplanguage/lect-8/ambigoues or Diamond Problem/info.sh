What is the Diamond Problem?
It occurs when:

A class inherits from two classes, which both inherit from the same base class.

The derived class ends up with two copies of the base class members → ambiguity.


Virtual Inheritance

We mark the intermediate classes as virtual to ensure only one shared copy of Animal is inherited.