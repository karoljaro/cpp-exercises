//
// Created by karoljaron on 13.10.2026.
//
#include <iostream>

int main()
{
    int a, b, c;

    std::cout << "Enter three integers (a, b, c): " << std::endl;

    std::cout << "a: ";
    std::cin >> a;

    std::cout << "b: ";
    std::cin >> b;

    std::cout << "c: ";
    std::cin >> c;

    if (a > 0 && b > 0 && c > 0 && a + b > c && a + c > b && b + c > a)
    {
        std::cout << "The numbers can form a triangle." << std::endl;
    }
    else
    {
        std::cout << "The numbers cannot form a triangle." << std::endl;
    }

    return 0;
}