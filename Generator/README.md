# Generating a password

This program simply generates random integers from 33 to 126, which represent
characters in the [ASCII table](http://www.asciitable.com/).

## How to use

Compile the program with one of these ways:

* Manually compile the program from the workspace root.  
    `g++ -o passgen Generator/Program.cpp`
* Use the build menu in Visual Studio Code (compiles a debuggable file)
    1. Press **ctrl+shift+b**
    1. Choose **"G++ - Compile Generator"**

Use the program from the terminal like so:

```bash
$ ./passgen 16 # The number of characters
D.jn/d^,)<WX:;U*
```
