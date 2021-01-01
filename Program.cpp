#include <iostream>
#include "modifiers.h"
#include "key.h"

int main(int argc, char *argv[])
{
    // The input for the encrypter
    std::string input;
    if (argc > 1)
    {
        input = argv[1];
    }
    else
    {
        std::cout << "Please input a phrase: ";
        getline(std::cin, input);
    }

    KeyPhrase key(input);

    // The output of the program.
    std::string result;
    for (int i = 0; i < input.length(); i++)
    {
        result += AddChars(input[i], key.GetChar(i));
    }
    std::cout << result << "\n";
}
