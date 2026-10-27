//
// Created by karoljaron on 27.10.2026.
//
#include <iostream>
#

int main()
{
    char key;

    std::cout << "Press keys (press 'q' to quit):" << std::endl;

    while (std::cin >> key)
    {
        if (key == 'q')
        {
            break;
        }

        std::cout << "Key: " << key << "ASCII: " << static_cast<int>(key) << std::endl;
    }

    return 0;
}