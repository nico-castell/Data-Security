#pragma once
#include <string>

class KeyPhrase
{
    char key[4]; // The encryption key obtained from the input.
public:
    KeyPhrase(const std::string &origin); // Build the key from the input
    char GetChar(const int &i); // Get a character in the range of the key
};
