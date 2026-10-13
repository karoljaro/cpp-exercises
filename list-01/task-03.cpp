//
// Created by karoljaron on 13.10.2026.
//
#include <iostream>
#include <string>
#include <iomanip>

int main()
{
    std::string firstName, lastName;
    int age;

    std::cout << "Enter the first name: ";
    std::cin >> firstName;

    std::cout << "\nEnter the last name: ";
    std::cin >> lastName;

    std::cout << "\nEnter the age: ";
    std::cin >> age;

    std::cout << "\n --------- Worker Information --------- " << std::endl;

    std::cout << std::left << std::setw(15) << "Name"
                << std::setw(15) << "Surname"
                <<  "Age" << std::endl;

    std::cout << "-------------------------------------------\n";

    std::cout << std::left << std::setw(15) << firstName
                << std::setw(15) << lastName
                <<  age << std::endl;

    return 0;
}