//
// Created by karoljaron on 13.10.2026.
//
#include <iostream>
#include <cmath>

int main()
{
    float Ax, Ay, Bx, By;

    std::cout << "Enter ax coordinate: ";
    std::cin >> Ax;

    std::cout << "Enter ay coordinate: ";
    std::cin >> Ay;

    std::cout << "Enter bx coordinate: ";
    std::cin >> Bx;

    std::cout << "Enter by coordinate: ";
    std::cin >> By;

    const double distance = std::sqrt(std::pow(Bx - Ax, 2) + std::pow(By - Ay, 2));

    std::cout << "Distance between points A and B: " << distance << std::endl;
}
