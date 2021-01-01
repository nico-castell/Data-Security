#include "key.h"

KeyPhrase::KeyPhrase(const std::string &origin)
{
    this->key[0] = origin[0];
    this->key[1] = origin[1];
    this->key[2] = origin[origin.length() - 2];
    this->key[3] = origin[origin.length() - 1];
}

char KeyPhrase::GetChar(const int &i)
{
    return key[i % 4];
}
