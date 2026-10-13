//
// Created by karoljaron on 13.10.2026.
//
#include <iostream>

int main()
{
    char character;

    std::cout << "Enter a character: ";
    std::cin >> character;

    if (isupper(character)) {
        std::cout << "uppercase letter" << std::endl;
    }
    else if (islower(character)) {
        std::cout << "lowercase letter" << std::endl;
    }
    else if (isdigit(character)) {
        std::cout << "digit" << std::endl;
    }
    else {
        std::cout << "other key" << std::endl;
    }

    return 0;
}