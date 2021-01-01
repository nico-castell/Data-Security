#pragma once
#include <string>

class KeyPhrase
{
    char key[4]; // The encryption key obtained from the input.
public:
    KeyPhrase(const std::string &origin);
    char GetChar(const int &i);
};
