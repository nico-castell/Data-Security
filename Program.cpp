#include <iostream>
#include "modifiers.h"
#include "key.h"

int main(int argc, char *argv[])
{
    std::string input;  // The input for the encrypter
    std::string result; // The result of the program.

    // If the user passed an argument, use it as the input.
    if (argc > 1)
    {
        input = argv[1];
    }
    else // Get the input from the console.
    {
        std::cout << "Please input a phrase: ";
        getline(std::cin, input);
    }

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
}
