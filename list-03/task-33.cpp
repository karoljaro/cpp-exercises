//
// Created by karoljaron on 27.10.2026.
//
#include <iostream>

int main()
{
    int number = 0;
    int count = 0;
    long long sum = 0;

    std::cout << "Enter numbers (0 to stop):" << std::endl;

    while (true)
    {
        std::cin >> number;

        if (number <= 0)
        {
            break;
        }

        sum += number;
        count++;
    }

    if (count > 0)
    {
        double average = static_cast<double>(sum) / count;
        std::cout << "Average of positive numbers: " << average << std::endl;
    }
    else
    {
        std::cout << "No positive numbers were entered." << std::endl;
    }

    return 0;
}