# XOR

This is an XOR table:

Value 1 | Value 2 | Result
-|-|-
0 | 0 | False
1 | 0 | True
0 | 1 | True
1 | 1 | False

## XOR Encryption

This is the result of XOR encryption ([ASCII](http://www.asciitable.com/)):  
Pass: Arbolito  
Key: DEF  
Result: **ENQ**7$+)/0\*

Value 1 | Value 2 | Result
-|-|-
A | D | ENQ
r | E | 7
b | F | $
o | D | +
l | E | )
i | F | /
t | D | 0
o | E | *

## How it's broken down:

This is what happens to the binaries in the ecryption process:

Value 1 | Value 2 | Result
-|-|-
**01000001** *(65)* 'A' | **01000100** *(68)* 'D' | **00000101** *(5)* 'ENQ'
**01110010** *(114)* 'r' | **01000101** *(69)* 'E' | **00110111** *(55)* '7'
**01100010** *(98)* 'b' | **01000110** *(70)* 'F' | **00100100** *(36)* '$'
**01101111** *(111)* 'o' | **01000100** *(68)* 'D' | **00101011** *(43)* '+'
**01101100** *(108)* 'l' | **01000101** *(69)* 'E' | **00101001** *(41)* ')'
**01101001** *(105)* 'i' | **01000110** *(70)* 'F' | **00101111** *(47)* '/'
**01110100** *(116)* 't' | **01000100** *(68)* 'D' | **00110000** *(78)* '0'
**01101111** *(111)* 'o' | **01000101** *(69)* 'E' | **00101010** *(42)* '*'

This is what happens to the result if it's re-encrypted with the same key:  
Pass: **ENQ**7$+)/0\*  
Key: DEF  
Result: Arbolito

Value 1 | Value 2 | Result
-|-|-
**00000101** *(5)* 'ENQ' | **01000100** *(68)* 'D' | **01000001** *(65)* A'
**00110111** *(55)* '7' | **01000101** *(69)* 'E' | **01110010** *(114)* r'
**00100100** *(36)* '$' | **01000110** *(70)* 'F' | **01100010** *(98)* b'
**00101011** *(43)* '+' | **01000100** *(68)* 'D' | **01101111** *(111)* o'
**00101001** *(41)* ')' | **01000101** *(69)* 'E' | **01101100** *(108)* l'
**00101111** *(47)* '/' | **01000110** *(70)* 'F' | **01101001** *(105)* i'
**00110000** *(78)* '0' | **01000100** *(68)* 'D' | **01110100** *(116)* t'
**00101010** *(42)* '*' | **01000101** *(69)* 'E' | **01101111** *(111)* o'

### Bash code to run this example

Using the program available in this branch.

If you're on Linux you can just use the [makefile](makefile) in this branch.

```bash
# To encrypt:
./passcrypt "Arbolito" DEF

# To decrypt:
./passcrypt `printf "\x057$+)/0*"` DEF

# Or use a variable
VAR="$(./passcrypt "Arbolito" DEF)"
./passcrypt "$VAR" DEF
```
