//
// Created by karoljaron on 27.10.2026.
//
#include <iostream>
#include <array>

int main()
{
    constexpr int N = 3;

    std::array<std::array<double, N>, N> A{};
    std::array<double, N> x{};
    std::array<double, N> y{};

    std::cout << "Enter the 3x3 matrix A:\n";

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            std::cout << "A[" << i << "][" << j << "]: ";
            std::cin >> A[i][j];
        }
    }

    std::cout << "\nEnter vector x:\n";

    for (int i = 0; i < N; i++) {
        std::cout << "x[" << i << "]: ";
        std::cin >> x[i];
    }

    // Matrix-vector multiplication: y = Ax
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            y[i] += A[i][j] * x[j];
        }
    }

    std::cout << "\nResult vector y:\n";

    for (int i = 0; i < N; i++) {
        std::cout << "y[" << i << "] = " << y[i] << '\n';
    }

    return 0;
}