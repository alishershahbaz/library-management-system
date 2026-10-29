#include "actions.h"

#include <iostream>

#include "input.h"

bool SwapBooks(LinkedList& library)
{
    int firstIndex;
    int secondIndex;
    if (!ReadInt("Enter the first index: ", firstIndex) ||
        !ReadInt("Enter the second index: ", secondIndex))
        return false;

    if (firstIndex < 0 || firstIndex >= library.GetCount() ||
        secondIndex < 0 || secondIndex >= library.GetCount())
        std::cout << "Invalid index. No books were swapped.\n";
    else
    {
        library.Swap(firstIndex, secondIndex);
        std::cout << "Books swapped.\n";
    }
    return true;
}
