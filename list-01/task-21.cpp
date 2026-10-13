//
// Created by karoljaron on 13.10.2026.
//
#include <iostream>

int main()
{
    double firstNumber, secondNumber;
    char operation;

    std::cout << "Enter first number: ";
    std::cin >> firstNumber;

    std::cout << "Enter second number: ";
    std::cin >> secondNumber;

    std::cout << "What operation would you like to perform? (+, -, *, /): ";
    std::cin >> operation;

    switch (operation) {
        case '+':
            std::cout << "Result: " << firstNumber + secondNumber << std::endl;
            break;
        case '-':
            std::cout << "Result: " << firstNumber - secondNumber << std::endl;
            break;
        case '*':
            std::cout << "Result: " << firstNumber * secondNumber << std::endl;
            break;
        case '/':
            if (secondNumber != 0)
                std::cout << "Result: " << firstNumber / secondNumber << std::endl;
            else
                std::cout << "Error: Division by zero!" << std::endl;
            break;
        default:
            std::cout << "Invalid operation!" << std::endl;
    }
}