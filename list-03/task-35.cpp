//
// Created by karoljaron on 27.10.2026.
//
#include <iostream>
#include <cmath>

int main()
{
    long double sum = 0.0;
    float x = 0.0f;
    int n = 0;

    std::cout << "Enter denominator (x): ";
    std::cin >> x;

    if (x == 0.0f)
    {
        std::cout << "Denominator cannot be zero." << std::endl;
        return 1;
    }

    std::cout << "Enter power (n): ";
    std::cin >> n;

    if (n <= 0)
    {
        std::cout << "Power must be a positive integer." << std::endl;
        return 1;
    }

    for (int i = 1; i <= n; ++i)
    {
        sum += 1.0 / std::pow(x, i);
    }

    std::cout << "Sum: " << sum << std::endl;

    return 0;
}