#include <iostream>
#include "modifiers.h"

/// <summary>
/// Add the numerical values of two characters, normalize for the ASCII table
/// </summary>
/// <param name="base_char">Base character</param>
/// <param name="key_char">Key character</param>
/// <returns>An encrypted character</returns>
char AddChars(const char &base_char, const char &key_char)
{
<<<<<<< HEAD
=======
    std::cout << "Result: " << (base_char + key_char) % 127 << "\n";
>>>>>>> edd7be6fa0f9d0d2f80cfa1ccf1d67eaabff6620
    return (base_char + key_char) % 127;
}
