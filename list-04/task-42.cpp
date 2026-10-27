//
// Created by karoljaron on 27.10.2026.
//
#include <iostream>
#include <vector>

int main()
{
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

    double sum = 0.0;

    std::vector<double> negative_numbers;
    std::vector<double> positive_numbers;

    double min = arr[0];
    double max = arr[0];

    for (double i : arr)
    {
        sum += i;
        if (i < 0)
        {
            negative_numbers.push_back(i);
        }
        else
        {
            positive_numbers.push_back(i);
        }
        if (i < min) {
            min = i;
        }
        if (i > max) {
            max = i;
        }
    }

    std::cout << "\nSum of all elements: " << sum << '\n';
    std::cout << "Minimum element: " << min << '\n';
    std::cout << "Maximum element: " << max << '\n';

    std::cout << "\nCount of negative numbers: " << negative_numbers.size() << '\n';
    std::cout << "Count of positive numbers: " << positive_numbers.size() << '\n';
}