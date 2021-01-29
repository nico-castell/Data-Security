# Obfuscator program

This is an interesting program. It takes a string as input and returns a
*seemingly* random string of characters. But, unlike encryption (which
return a very similar output), this process cannot be easily reverted.

However, when you give the exact same string as input, the program will
produce the exact same output.

1. [How to use it](#How-to-use-it)
1. [How it works](#How-it-works)

## How to use it

Compile the program with one of these ways:

* Manually compile the program from the workspace root.  
    `g++ -o passobfuscate Obfuscator/Program.cpp`
* Use the build menu in Visual Studio Code (compiles a debuggable file)
    1. Press **ctrl+shift+b**
    1. Choose **"G++ - Compile Obfuscator"**

Use the program from the terminal:

```bash
$ ./passobfuscate 'Hello World!' # The string you want to obfuscate
2!&3Yfa5\(!O
```

## How it works

The program relies on the integer values of every character in the
[ASCII table](https://www.asciitable.com).

1. The program takes the string. and uses it first and last 2 characters as a
    key that will be used to perform mathematical operations with the chars.
1. The program will iterate on every character in the input, and perform 1 of
    4 mathematical operations based on the count of iterations.
    1. The program will perform a mathematical operation with the character
        from the input and the key as operands, the resulting value will be
    1. Normalized to be in the range of the
        [ASCII table](https://www.asciitable.com) from 33 to 126, which are
        not control characters.
1. After the operation has finished, the output will be appended to the output
    string,
1. Once the entire key has been generated, the program will print it to the
    console and exit.
