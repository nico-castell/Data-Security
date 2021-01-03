// Apache License, version 2

// Copyright 2021 nico-castell

// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at

//    http://www.apache.org/licenses/LICENSE-2.0

// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

#include <cmath>
#include "modifiers.h"

// Normalize ASCII character between value 31 and 127 (96).
char NormalizeASCII(const char &character)
{
    return 31 + (character % 95);
}

// Add the numerical values of two characters, normalize for the ASCII table
char AddChars(const char &base_char, const char &key_char)
{
    return NormalizeASCII((base_char + key_char) % 127);
}

// Rest the numerical values of two characters, normalize for the ASCII table
char RestChars(const char &base_char, const char &key_char)
{
    return NormalizeASCII(abs((base_char - key_char) % 127));
}

// Multiply the numerical values of two characters, normalize for the ASCII table
char MultiplyChars(const char &base_char, const char &key_char)
{
    return NormalizeASCII((base_char * key_char) % 127);
}

// Get the hypotenunse of a rectangle triangle. Assumming base_char is is's
// base, and key_char is it's height
char TriChars(const char &base_char, const char &key_char)
{
    int hypotenunse = sqrt(base_char * base_char + key_char * key_char);
    return NormalizeASCII(hypotenunse % 127);
}
