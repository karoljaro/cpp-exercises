//
// Created by karoljaron on 27.10.2026.
//
#include <iostream>

int main()
{
    std::cout << "How long line should be? " << std::endl;

    int length;
    std::cin >> length;

    for (int i = 0; i < length; ++i) {
        std::cout << "-";
    }

    std::cout << std::endl;

    return 0;
}