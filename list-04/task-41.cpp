//
// Created by karoljaron on 27.10.2026.
//
#include <iostream>
#include <vector>

int main() {
    int n;

    std::cout << "Enter the array size N: ";
    std::cin >> n;

    if (n <= 0) {
        std::cout << "Array size must be positive!\n";
        return 1;
    }

    std::vector<double> arr(n);

    for (int i = 0; i < n; i++) {
        std::cout << "Enter element [" << i << "]: ";
        std::cin >> arr[i];
    }

    std::cout << "\nAll array elements:\n";

    for (int i = 0; i < n; i++) {
        std::cout << "arr[" << i << "] = " << arr[i] << '\n';
    }

    int index;

    std::cout << "\nEnter the index of the element to read: ";
    std::cin >> index;

    if (index >= 0 && index < n) {
        std::cout << "arr[" << index << "] = "
                  << arr[index] << '\n';
    } else {
        std::cout << "Invalid index!\n";
    }

    return 0;
}