#include "actions.h"

#include <iostream>

void SortBooksById(LinkedList& library)
{
    library.Sort();
    std::cout << "Books sorted by ID in ascending order.\n";
}
