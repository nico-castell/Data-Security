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
#include "modifiers.h"
#include <iostream>

int main(int argc, char* argv[])
{
    if (argc != 2)
    {
        string name = argv[0];
        std::cerr << "\e[31mERROR: You must input one argument\e[00m\n"
                  << "\e[33mUsage\e[00m: " + name + " \"password\"\n"
                  << "\e[36mExample:\e[00m " + name + " \"Arbolito\"\n";
        return 1;
    }

    string input;  // The input for the encrypter
    string result; // The result of the program.

    // Use the argument from the user as the input.
    input = argv[1];

    KeyPhrase key(input);

    for (int i = 0; i < input.length(); i++)
    {
        int operation = i % 4;
        switch (operation)
        {
        case 0:
            result += AddChars(input[i], key.GetChar(i));
            break;
        case 1:
            result += RestChars(input[i], key.GetChar(i));
            break;
        case 2:
            result += MultiplyChars(input[i], key.GetChar(i));
            break;
        case 3:
            result += TriChars(input[i], key.GetChar(i));
            break;
        }
    }
    std::cout << result << "\n";

    return 0;
}
