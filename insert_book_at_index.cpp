#include "actions.h"

#include <iostream>
#include <string>

#include "input.h"

bool InsertBookAtIndex(LinkedList& library)
{
    int index;
    int id;
    std::string title;
    if (!ReadInt("Enter index: ", index) ||
        !ReadBookDetails(id, title))
        return false;

    library.InsertAt(CreateBook(id, title), index);
    std::cout << "Book inserted.\n";
    return true;
}
