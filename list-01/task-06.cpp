//
// Created by karoljaron on 13.10.2026.
//
#include <iostream>

int main()
{
    double a, b, c;

    std::cout << "Enter first integer number (a): ";
    std::cin >> a;

    std::cout << "Enter second integer number (b): ";
    std::cin >> b;

    std::cout << "Enter third integer number (c): ";
    std::cin >> c;

    const double w = (a * b) / (b + c) - (a * c) / (b + c);

    std::cout << "Result (w): " << w << std::endl;
}