//
// Created by karoljaron on 27.10.2026.
//
#include <iostream>
#include <vector>

int main()
{
    int n;

    std::cout << "Enter array size: ";
    std::cin >> n;

    if (n <= 0) {
        std::cout << "Invalid array size!\n";
        return 1;
    }

    std::vector<double> arr(n);

    for (int i = 0; i < n; i++) {
        std::cout << "Enter element [" << i << "]: ";
        std::cin >> arr[i];
    }

    std::cout << "\nOriginal array: ";
    for (const double element : arr) {
        std::cout << element << " ";
    }

    double last = arr[n - 1];

    for (int i = n - 1; i > 0; i--) {
        arr[i] = arr[i - 1];
    }

    arr[0] = last;

    std::cout << "\nShifted array: ";
    for (const double element : arr) {
        std::cout << element << " ";
    }

    std::cout << '\n';

    return 0;
}