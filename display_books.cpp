#include "actions.h"

#include <iostream>

void DisplayBooks(const LinkedList& library)
{
    if (library.IsEmpty())
        std::cout << "The collection is empty.\n";
    else
        library.Print();
}
