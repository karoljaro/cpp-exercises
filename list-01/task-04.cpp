//
// Created by karoljaron on 13.10.2026.
//
#include <iostream>
#include <cmath>

int main() {
    constexpr double PI = 3.14159;

    double radius;

    std::cout << "Enter radius: ";
    std::cin >> radius;

    const double circumference = 2 * PI * radius;
    const double area = PI * std::pow(radius, 2);

    std::cout << "Radius: " << radius << std::endl;
    std::cout << "Circumference: " << circumference << std::endl;
    std::cout << "Area: " << area << std::endl;

    return 0;
}