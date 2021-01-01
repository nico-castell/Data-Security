#include <iostream>
#include <bitset>

int main()
{
    // The input from the user.
    std::string input;
    std::cout << "Please input a phrase: ";
    getline(std::cin, input);

    for (int i = 0; i < input.length(); i++)
    {
        char character = input[i];
        std::bitset<8> binaryForm(character);
        std::cout << binaryForm << "\n";
    }
    // std::cout << "\n";
}
