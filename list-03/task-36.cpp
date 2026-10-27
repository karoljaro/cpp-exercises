//
// Created by karoljaron on 27.10.2026.
//
#include <iostream>

int main()
{
    int tree_long = 0;

    std::cout << "How long christmas tree do you want? ";
    std::cin >> tree_long;

    if (tree_long <= 0)
    {
        std::cout << "Tree length must be a positive integer." << std::endl;
        return 1;
    }

    for (int i = 1; i <= tree_long; ++i)
    {
        for (int j = 0; j < tree_long - i; ++j)
        {
            std::cout << " ";
        }
        for (int k = 0; k < (2 * i - 1); ++k)
        {
            std::cout << "*";
        }
        std::cout << std::endl;
    }

    return 0;
}