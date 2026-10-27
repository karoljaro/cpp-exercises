//
// Created by karoljaron on 27.10.2026.
//
#include <iostream>
#include <vector>

int main()
{
    std::vector<double> arrA;
    std::vector<double> arrB;
    std::vector<double> arrC;

    double input;

    std::cout << "Enter doubles for array A (enter 0 to stop):\n";

    while (true) {
        std::cout << "Enter a number: ";
        if (!(std::cin >> input)) {
            return 1;
        }

        if (input == 0) {
            break;
        }

        arrA.push_back(input);
    }

    std::cout << "Enter doubles for array B (enter 0 to stop):\n";

    while (true) {
        std::cout << "Enter a number: ";
        if (!(std::cin >> input)) {
            return 1;
        }

        if (input == 0) {
            break;
        }

        arrB.push_back(input);
    }

    arrC.insert(arrC.end(), arrA.begin(), arrA.end());
    arrC.insert(arrC.end(), arrB.begin(), arrB.end());

    std::cout << "Array C (concatenation of A and B):\n";

    for (const double element : arrC) {
        std::cout << element << " ";
    }

    std::cout << '\n';

    return 0;
}