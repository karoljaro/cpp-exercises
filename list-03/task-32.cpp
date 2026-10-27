//
// Created by karoljaron on 27.10.2026.
//
#include <iostream>

int main()
{
    int count = 0;

    std::cout << "Multiplication Table (1 to n):" << std::endl;
    std::cout << "Enter a number (n): ";

    std::cin >> count;

    for (int i = 1; i <= count; ++i)
    {
        for (int j = 1; j <= count; ++j)
        {
            std::cout << i * j << "\t";
        }
        std::cout << std::endl;
    }

    return 0;
}