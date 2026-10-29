#include "actions.h"

#include <iostream>

#include "input.h"

bool RemoveBookAtIndex(LinkedList& library)
{
    int index;
    if (!ReadInt("Enter index: ", index))
        return false;

    BookNode* removed = library.RemoveAt(index);
    if (removed == nullptr)
        std::cout << "The collection is empty. No book to remove.\n";
    else
    {
        std::cout << "Removed book: " << removed->title << std::endl;
        delete removed;
    }
    return true;
}
