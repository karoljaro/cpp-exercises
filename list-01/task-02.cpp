//
// Created by karoljaron on 13.10.2026.
//
#include <iostream>

int main()
{
    double num1, num2, num3;

    std::cout << "Enter first number: ";
    std::cin >> num1;

    std::cout << "\nEnter second number: ";
    std::cin >> num2;

    std::cout << "\nEnter third number: ";
    std::cin >> num3;

    const double sum = num1 + num2 + num3;

    std::cout << "\nThe sum of the three numbers is: " << sum << std::endl;

    return 0;
}