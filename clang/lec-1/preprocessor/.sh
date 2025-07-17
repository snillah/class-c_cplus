#line 100

File Inclusion in C
File inclusion is a preprocessor feature in C that allows you to include the contents of one file into another before the actual compilation begins. It’s commonly used to include header files, which contain declarations of functions, macros, constants, and user-defined types.

The directive used for file inclusion is:

#include

Types of File Inclusion in C
There are two main types of file inclusion in C:

1. System Header File Inclusion
Syntax:

#include <filename>

This tells the compiler to look for the file in the standard system directories (like stdio.h, stdlib.h, etc.).

Example:

#include <stdio.h>

Used for including standard C library headers.

2. User-defined Header File Inclusion
Syntax:

#include "filename"

This tells the compiler to look for the file in the current directory (first), and then in system directories.

Example:

#include "myheader.h"

Used for including your own header files containing function declarations or macros.

How File Inclusion Works
When the preprocessor encounters #include, it literally copies and pastes the contents of the specified file into the source code before it is compiled. This helps modularize code and promotes reusability.

Conditional Compilation in C
Conditional Compilation is a powerful feature of the C preprocessor that allows you to compile certain parts of the code based on specific conditions. It’s commonly used to include or exclude code depending on whether a macro is defined, a debug mode is enabled, or you're targeting a specific platform.

This is achieved using preprocessor directives that start with #, such as:

#if, #elif, #else, #endif

#ifdef, #ifndef

1. #ifdef and #ifndef
These check whether a macro is defined or not defined.

#define DEBUG

#ifdef DEBUG
    printf("Debug mode is ON\n");
#endif

#ifndef RELEASE
    printf("Release mode is OFF\n");
#endif

2. #if, #elif, #else, #endif
These allow more complex conditions using expressions and values.

#define VERSION 2

#if VERSION == 1
    printf("Version 1 selected\n");
#elif VERSION == 2
    printf("Version 2 selected\n");
#else
    printf("Unknown version\n");
#endif

3. #undef to Remove Macros
You can remove a previously defined macro using:

#undef DEBUG

What is Preprocessor in C Language?
A preprocessor in C is a tool that runs before the actual compilation of your code begins. 
It handles all the lines that start with a #, such as #include, #define, #ifdef, and others. 
These lines are called preprocessor directives. 