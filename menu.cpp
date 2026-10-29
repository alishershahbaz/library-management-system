#include "menu.h"

#include <iostream>

void DisplayMenu()
{
    std::cout << "\n========================================\n";
    std::cout << "LIBRARY BOOK COLLECTION SYSTEM\n";
    std::cout << "========================================\n";
    std::cout << "1. Display All Books\n";
    std::cout << "2. Insert Book at Head\n";
    std::cout << "3. Remove Book from Head\n";
    std::cout << "4. Insert Book at Index\n";
    std::cout << "5. Remove Book at Index\n";
    std::cout << "6. Swap Books\n";
    std::cout << "7. Sort Books by ID\n";
    std::cout << "8. Reverse Book Collection\n";
    std::cout << "9. Check Collection Status\n";
    std::cout << "10. Exit\n";
}
