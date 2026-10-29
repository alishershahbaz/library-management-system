#include "actions.h"

#include <iostream>

void ReverseBookCollection(LinkedList& library)
{
    library.Reverse();
    std::cout << "Book collection reversed.\n";
}
