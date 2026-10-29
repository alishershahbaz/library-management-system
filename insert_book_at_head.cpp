#include "actions.h"

#include <iostream>
#include <string>

#include "input.h"

bool InsertBookAtHead(LinkedList& library)
{
    int id;
    std::string title;
    if (!ReadBookDetails(id, title))
        return false;

    library.Insert(CreateBook(id, title));
    std::cout << "Book inserted at the head.\n";
    return true;
}
