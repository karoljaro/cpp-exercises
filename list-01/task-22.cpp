//
// Created by karoljaron on 13.10.2026.
//
#include <iostream>
#include <cmath>

int main()
{
    double A, B, C;

    std::cout << "Provide the coefficients of the equation Ax^2 + Bx + C = 0" << std::endl;
    std::cout << "A: ";
    std::cin >> A;
    std::cout << "B: ";
    std::cin >> B;
    std::cout << "C: ";
    std::cin >> C;

    const double discriminant = B * B - 4 * A * C;

    if (discriminant > 0)
    {
        const double root1 = (-B + std::sqrt(discriminant)) / (2 * A);
        const double root2 = (-B - std::sqrt(discriminant)) / (2 * A);
        std::cout << "The equation has two real roots: " << root1 << " and " << root2 << std::endl;
    }
    else if (discriminant == 0)
    {
        const double root = -B / (2 * A);
        std::cout << "The equation has one real root: " << root << std::endl;
    }
    else
    {
        std::cout << "The equation has no real roots." << std::endl;
    }
}