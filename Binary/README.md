# Binary viewer program

This program takes a string as input and outputs the binary, octal, hexadecimal, and decimal values of each character.

**Warning:** This program only runs on UNIX like systems, it includes the *unistd.h* header.

## How to use

Compile the program with one of these ways:

* Manually compile the program from the workspace root.  
    `g++ -o binme Binary/Program.cpp`
* Use the build menu in Visual Studio Code (compiles a debuggable file)
    1. Press **ctrl+shift+b**
    1. Choose **"G++ - Compile Binary"**

Use the program from the terminal like so:

```bash
$ ./binary 'Hello World!'
Binary  	Dec	Hex	Oct	Char
01001000	72	48	110	H
01100101	145	65	145	e
01101100	154	6c	154	l
01101100	154	6c	154	l
01101111	157	6f	157	o
00100000	40	20	40	 
01010111	127	57	127	W
01101111	157	6f	157	o
01110010	162	72	162	r
01101100	154	6c	154	l
01100100	144	64	144	d
00100001	41	21	41	!
```
### Table view

|Binary        |Dec  |Hex  |Oct  |Char  |
|:------------:|:---:|:---:|:---:|:----:|
|**01001000**  |72   |48   |110  |H     |
|**01100101**  |145  |65   |145  |e     |
|**01101100**  |154  |6c   |154  |l     |
|**01101100**  |154  |6c   |154  |l     |
|**01101111**  |157  |6f   |157  |o     |
|**00100000**  |40   |20   |40   |      |
|**01010111**  |127  |57   |127  |W     |
|**01101111**  |157  |6f   |157  |o     |
|**01110010**  |162  |72   |162  |r     |
|**01101100**  |154  |6c   |154  |l     |
|**01100100**  |144  |64   |144  |d     |
|**00100001**  |41   |21   |41   |!     |
