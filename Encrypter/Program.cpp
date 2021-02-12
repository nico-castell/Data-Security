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

#include <iostream>
using std::string;

// Fill the array
void FillArray(char arr[], const string& str, const int& arrLength)
{
    for (int i = 0; i < arrLength; i++)
        arr[i] = str[i];
}

int main(int argc, char* argv[])
{
    // Validate input.
    if (argc != 3)
    {
        string name = argv[0];
        std::cerr << "\e[31mERROR: You must input two arguments\e[00m\n"
                  << "\e[33mUsage:\e[00m " + name + " \"password\" \"key\"\n"
                  << "\e[36mExample:\e[00m " + name + " \"Arbolito\" DEF\n";
        return 1;
    }

    // Convert to strings and get their length.
    string input = argv[1]; int il = input.length();
    string key   = argv[2]; int kl = key.length();

    // Create character arrays.
    char _input[il], _key[kl];
    FillArray(_input, input, il);
    FillArray(_key, key, kl);

    // Begin encryption process.
    string output = "";
    for (int i = 0; i < il; i++)
        output += _input[i] ^ _key[i % kl];

    std::cout << output << "\n";
    return 0;
}
