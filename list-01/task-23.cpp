//
// Created by karoljaron on 13.10.2026.
//
#include <iostream>

int main()
{
    int height;

    std::cout << "Enter your height in centimeters (cm): ";
    std::cin >> height;

    if (height < 0)
    {
        std::cout << "Height cannot be negative." << std::endl;
    }
    else if (height < 150)
    {
        std::cout << "You are considered short." << std::endl;
    }
    else if (height <= 180)
    {
        std::cout << "You have an average height." << std::endl;
    }
    else
    {
        std::cout << "You are considered tall." << std::endl;
    }
}