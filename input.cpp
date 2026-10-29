#include "input.h"

#include <iostream>
#include <limits>

bool ReadInt(const std::string& prompt, int& value)
{
    while (true)
    {
        std::cout << prompt;
        if (std::cin >> value)
        {
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            return true;
        }

        if (std::cin.eof())
            return false;

        std::cout << "Invalid input. Please enter a whole number.\n";
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    }
}

bool ReadBookDetails(int& id, std::string& title)
{
    if (!ReadInt("Enter Book ID: ", id))
        return false;

    std::cout << "Enter Book Title: ";
    return static_cast<bool>(std::getline(std::cin, title));
}
