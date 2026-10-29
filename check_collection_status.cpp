#include "actions.h"

#include <iostream>

void CheckCollectionStatus(const LinkedList& library)
{
    if (library.IsNotEmpty())
        std::cout << "The collection is not empty. Total books: "
                  << library.GetCount() << std::endl;
    else
        std::cout << "The collection is empty. Total books: 0\n";
}
