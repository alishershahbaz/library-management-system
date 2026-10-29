#include "actions.h"

#include <iostream>

void RemoveBookFromHead(LinkedList& library)
{
    BookNode* removed = library.Remove();
    if (removed == nullptr)
        std::cout << "The collection is empty. No book to remove.\n";
    else
    {
        std::cout << "Removed book: " << removed->title << std::endl;
        delete removed;
    }
}
