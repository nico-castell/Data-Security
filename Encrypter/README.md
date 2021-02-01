# Encryption program

This is an encryption program that uses a bitwise XOR gate to encrypt and decrypt strings.

1. [How to use](#How-to-use)
1. [XOR](#XOR)
    1. [XOR Encryption](#XOR-Encryption)
        1. [How it's broken down](#How-it's-broken-down)

## How to use

Compile the program with one of these ways:

* Manually compile the program from the workspace root.  
    `g++ -o passcrypt Encrypter/Program.cpp`
* Use the build menu in Visual Studio Code (compiles a debuggable file)
    1. Press **ctrl+shift+b**
    1. Choose **"G++ - Compile Encrypter"**

Use the program from the terminal, this example is explained in [How it's broken down](#How-it's-broken-down).

```bash
# To encrypt:
$ ./passcrypt "Arbolito" DEF # ./passcrypt "Phrase" "Key"
7$+)/0*

# To decrypt:
$ ./passcrypt `printf "\x057$+)/0*"` DEF
Arbolito

# Or use a variable:
$ VAR="$(./passcrypt "Arbolito" DEF)"
$ ./passcrypt "$VAR" DEF
Arbolito
```

## XOR

This is how an XOR evaluates booleans:

|Value 1  | Value 2 | Result   |
|:-------:|:-------:|:--------:|
|False    |False    | False    |
|**True** |False    | **True** |
|False    |**True** | **True** |
|**True** |**True** | False    |

### XOR Encryption

This is the result of XOR encryption ([ASCII](http://www.asciitable.com/)):  
Pass: Arbolito  
Key: DEF  
Result: **ENQ**7$+)/0\*

|Phrase  |Key  |Result   |
|:------:|:---:|:-------:|
|A       |D    |ENQ      |
|r       |E    |7        |
|b       |F    |$        |
|o       |D    |+        |
|l       |E    |)        |
|i       |F    |/        |
|t       |D    |0        |
|o       |E    |*        |

#### How it's broken down

This is what happens to the binaries in the ecryption process:

|Phrase                   | Key                     | Result                   |
|:-----------------------:|:-----------------------:|:------------------------:|
|**01000001** *(65)*  'A' | **01000100** *(68)* 'D' | **00000101** *(5)* 'ENQ' |
|**01110010** *(114)* 'r' | **01000101** *(69)* 'E' | **00110111** *(55)* '7'  |
|**01100010** *(98)*  'b' | **01000110** *(70)* 'F' | **00100100** *(36)* '$'  |
|**01101111** *(111)* 'o' | **01000100** *(68)* 'D' | **00101011** *(43)* '+'  |
|**01101100** *(108)* 'l' | **01000101** *(69)* 'E' | **00101001** *(41)* ')'  |
|**01101001** *(105)* 'i' | **01000110** *(70)* 'F' | **00101111** *(47)* '/'  |
|**01110100** *(116)* 't' | **01000100** *(68)* 'D' | **00110000** *(78)* '0'  |
|**01101111** *(111)* 'o' | **01000101** *(69)* 'E' | **00101010** *(42)* '*'  |

This is what happens to the result if it's re-encrypted with the same key:  
Pass: **ENQ**7$+)/0\*  
Key: DEF  
Result: Arbolito

|Phrase                    | Key                     | Result                   |
|:------------------------:|:-----------------------:|:------------------------:|
|**00000101** *(5)*  'ENQ' | **01000100** *(68)* 'D' | **01000001** *(65)*  'A' |
|**00110111** *(55)* '7'   | **01000101** *(69)* 'E' | **01110010** *(114)* 'r' |
|**00100100** *(36)* '$'   | **01000110** *(70)* 'F' | **01100010** *(98)*  'b' |
|**00101011** *(43)* '+'   | **01000100** *(68)* 'D' | **01101111** *(111)* 'o' |
|**00101001** *(41)* ')'   | **01000101** *(69)* 'E' | **01101100** *(108)* 'l' |
|**00101111** *(47)* '/'   | **01000110** *(70)* 'F' | **01101001** *(105)* 'i' |
|**00110000** *(78)* '0'   | **01000100** *(68)* 'D' | **01110100** *(116)* 't' |
|**00101010** *(42)* '*'   | **01000101** *(69)* 'E' | **01101111** *(111)* 'o' |
