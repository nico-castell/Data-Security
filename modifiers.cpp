#include <iostream>
#include "modifiers.h"

// Add the numerical values of two characters, normalize for the ASCII table
char AddChars(const char &base_char, const char &key_char)
{
    return (base_char + key_char) % 127;
}
