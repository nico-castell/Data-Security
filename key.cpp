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

#include "key.h"

// Build the key from the input
KeyPhrase::KeyPhrase(const std::string &origin)
{
    this->key[0] = origin[0];
    this->key[1] = origin[1];
    this->key[2] = origin[origin.length() - 2];
    this->key[3] = origin[origin.length() - 1];
}

// Get a character in the range of the key
char KeyPhrase::GetChar(const int &i)
{
    return key[i % 4];
}
