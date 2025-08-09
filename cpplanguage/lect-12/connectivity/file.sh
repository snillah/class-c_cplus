
 | Class      | Header      | Purpose                                                   |
 | ---------- | ----------- | --------------------------------------------------------- |
 | `ifstream` | `<fstream>` | **Input file stream** → Reading from a file               |
 | `ofstream` | `<fstream>` | **Output file stream** → Writing to a file                |
 | `fstream`  | `<fstream>` | **File stream** → Can **read & write** in the same object |

 Common Modes for File Access
 When opening files, you can pass a mode flag:

ios::in      Read
ios::out     Write
ios::app     Append
ios::binary  Binary mode
ios::trunc   Delete contents before writing
