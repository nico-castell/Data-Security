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

#include <cstdlib>
#include <ctime>
#include <iostream>
using std::string;

int main(int argc, char* argv[])
{
    // Validate argument input.
    if (argc != 2)
    {
        string name = argv[0];
        std::cerr << "\e[31mERROR: You must input one argument\e[00m\n"
                  << "\e[33mUsage:\e[00m " + name + " <number_of_chars>\n"
                  << "\e[36mExample:\e[00m " + name + " 12\n";
        return 1;
    }
    // Define the number of characters.
    int n_chars = strtol(argv[1], NULL, 10);

    srand(time(NULL));
    string output = "";

    // Use a randomizer to chreate a random password
    for (int i = 0; i < n_chars; i++)
    {
        char ap = 33 + (rand() % 94);
        output += ap;
    }
    std::cout << output << "\n";

    return 0;
}
