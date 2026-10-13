//
// Created by karoljaron on 13.10.2026.
//
#include <iostream>

int main()
{
    double cx, cy, r_inner, R_outer;
    double px, py;

    std::cout << "Enter ring center coordinates (cx cy): ";
    std::cin >> cx >> cy;
    std::cout << "Enter the inner radius (r): ";
    std::cin >> r_inner;
    std::cout << "Enter the outer radius (R): ";
    std::cin >> R_outer;

    if (r_inner >= R_outer || r_inner <= 0) {
        std::cout << "Error: Inner radius must be positive and smaller than outer radius." << std::endl;
        return 1;
    }

    std::cout << "Enter point coordinates (px py): ";
    std::cin >> px >> py;

    const double dx = px - cx;
    const double dy = py - cy;
    const double dist_squared = dx * dx + dy * dy;

    const double r_squared = r_inner * r_inner;
    const double R_squared = R_outer * R_outer;

    if (dist_squared < r_squared) {
        std::cout << "The point is inside the inner circle." << std::endl;
    }
    else if (dist_squared >= r_squared && dist_squared <= R_squared) {
        std::cout << "The point is inside the ring (between the radii)." << std::endl;
    }
    else {
        std::cout << "The point is outside the ring." << std::endl;
    }

    return 0;
}