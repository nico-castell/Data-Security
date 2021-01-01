#include <iostream>
#include <bitset>
#include "modifiers.h"
#include "key.h"

int main()
{
    // The input from the user.
    std::string input;
    std::cout << "Please input a phrase: ";
    getline(std::cin, input);

    KeyPhrase key(input);

    // The output of the program.
    std::string result;
    for (int i = 0; i < input.length(); i++)
    {
        result += AddChars(input[i],key.GetChar(i));
    }
    std::cout << result << "\n";
}
