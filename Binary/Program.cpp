#include <iostream>
#include <unistd.h>
#include <bitset>
using std::string;

// Only print escape sequence to format output if the output is a console.
string cprty(const string &formatting)
{
    if (!isatty(fileno(stdout)))
        return "";
    return "\e[" + formatting + "m";
}

int main(int argc, char *argv[])
{
    // Validate arguments.
    if (argc != 2)
    {
        string name = argv[0];
        std::cerr << "\e[31mERROR: You must input one argument\n"
                  << "\e[33mUsage:\e[00m " + name + " 'Phrase'\n"
                  << "\e[36mExample:\e[00m " + name + " 'Hello World!'\n";
        return 1;
    }

    // The input from the user.
    string input = argv[1]; int il = input.length();

    // Print the headers for the table.
    std::cout << cprty("32") << "Binary  \tDec\tHex\tOct\tChar" << cprty("00") << "\n";

    // Print the table.
    for (int i = 0; i < il; i++)
    {
        char character = input[i];
        int charint = character;
        std::bitset<8> binaryForm(character);
        // Pretty print everything to the console
        std::cout << cprty("33") << binaryForm                  // Print the binary.
                  << cprty("00") << "\t" << charint             // Print the decimal.
                  << cprty("00") << "\t" << std::hex << charint // Print the hexadecimal.
                  << cprty("00") << "\t" << std::oct << charint // Print the octal.
                  << cprty("31") << "\t" << character           // Print the character.
                  << cprty("00") << "\n";                       // End the line.
    }
    return 0;
}
