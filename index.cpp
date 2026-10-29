#include <iostream>

#include "actions.h"
#include "input.h"
#include "menu.h"

using namespace std;

int main()
{
    LinkedList library;

    library.InsertAt(CreateBook(103, "Operating Systems"), 0);
    library.InsertAt(CreateBook(101, "Data Structures"), 1);
    library.InsertAt(CreateBook(105, "Computer Networks"), 2);
    library.InsertAt(CreateBook(102, "Database Systems"), 3);
    library.InsertAt(CreateBook(104, "Software Engineering"), 4);

    int choice;
    while (true)
    {
        DisplayMenu();
        if (!ReadInt("Enter your choice: ", choice))
            break;

        bool continueRunning = true;
        switch (choice)
        {
        case 1:
            DisplayBooks(library);
            break;
        case 2:
            continueRunning = InsertBookAtHead(library);
            break;
        case 3:
            RemoveBookFromHead(library);
            break;
        case 4:
            continueRunning = InsertBookAtIndex(library);
            break;
        case 5:
            continueRunning = RemoveBookAtIndex(library);
            break;
        case 6:
            continueRunning = SwapBooks(library);
            break;
        case 7:
            SortBooksById(library);
            break;
        case 8:
            ReverseBookCollection(library);
            break;
        case 9:
            CheckCollectionStatus(library);
            break;
        case 10:
            cout << "Exiting Library Book Collection System.\n";
            return 0;
        default:
            cout << "Invalid choice. Please select an option from 1 to 10.\n";
            break;
        }

        if (!continueRunning)
            return 0;
    }

    cout << "\nInput ended. Exiting Library Book Collection System.\n";
    return 0;
}
