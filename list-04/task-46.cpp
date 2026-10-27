//
// Created by karoljaron on 27.10.2026.
//
#include <iostream>
#include <array>
#include <cmath>
#include <numbers>

int main()
{
    double x1, x2, angle;

    std::cout << "Enter x1: ";
    std::cin >> x1;

    std::cout << "Enter x2: ";
    std::cin >> x2;

    std::cout << "Enter rotation angle (degrees): ";
    std::cin >> angle;

    const double radians = angle * std::numbers::pi / 180.0;

    const std::array<std::array<double, 2>, 2> A = {{
        {std::cos(radians), -std::sin(radians)},
        {std::sin(radians),  std::cos(radians)}
    }};

    const std::array<double, 2> x = {x1, x2};
    std::array<double, 2> y{};

    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            y[i] += A[i][j] * x[j];
        }
    }

    std::cout << "\nRotation matrix A:\n";

    for (const auto& row : A) {
        for (const double element : row) {
            std::cout << element << "\t";
        }
        std::cout << '\n';
    }

    std::cout << "\nRotated point:\n";
    std::cout << "y1 = " << y[0] << '\n';
    std::cout << "y2 = " << y[1] << '\n';

    return 0;
}