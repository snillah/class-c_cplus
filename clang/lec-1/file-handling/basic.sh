

What is File Handling in C?
File handling in C is the process of creating, opening, reading, writing, and closing files using built-in functions.
 Unlike regular input/output operations that deal with the screen and keyboard, file handling allows a program to store data permanently in a file on the computer's storage. 

You use functions like fopen(), fprintf(), fscanf(), fclose(), and others to interact with files. Files can be opened in different modes, such as read, write, or append, depending on what you want to do with them. 

Types of Files for Handling in C
The files are mainly classified into two types based on how data is stored and accessed:


1. Text Files
Text files store data in a human-readable format using standard ASCII characters. Each value, line, or word is stored as a series of characters. You can open these files in any text editor like Notepad and understand the contents easily. This format is ideal when the focus is on readability and portability.

Common file extensions: .txt, .csv.

Example use case: Storing names, student records, configuration files, or logs.

Functions used: fopen(), fprintf(), fscanf(), fgets(), fputs(), etc.

2. Binary Files
Binary files, on the other hand, store data in a machine-readable format using 0s and 1s. The data is stored exactly as it is in memory, without any conversion to characters. This makes binary files faster and more efficient in terms of storage and processing, but the content is not readable in a text editor.

Common file extensions: .bin, .dat

Example use case: Saving a list of employee records as binary data for efficient access.

Functions used: fread(), fwrite(), along with fopen() and fclose()