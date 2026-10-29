#include "linked_list.h"

#include <iostream>
#include <utility>

BookNode* LinkedList::GetNodeAt(int index) const
{
    BookNode* current = head;
    for (int i = 0; i < index && current != nullptr; i++)
        current = current->next;
    return current;
}

void LinkedList::CopyBookData(BookNode* first, BookNode* second)
{
    std::swap(first->bookID, second->bookID);
    std::swap(first->title, second->title);
}

void LinkedList::SwapContents(LinkedList& other)
{
    std::swap(head, other.head);
    std::swap(count, other.count);
}

LinkedList::LinkedList() : head(nullptr), count(0)
{
}

LinkedList::LinkedList(const LinkedList& other) : head(nullptr), count(0)
{
    LinkedList copy;
    BookNode* current = other.head;

    while (current != nullptr)
    {
        copy.InsertAt(new BookNode{current->bookID, current->title, nullptr}, copy.count);
        current = current->next;
    }

    SwapContents(copy);
}

LinkedList& LinkedList::operator=(const LinkedList& other)
{
    if (this != &other)
    {
        LinkedList copy(other);
        SwapContents(copy);
    }
    return *this;
}

LinkedList::~LinkedList()
{
    while (!IsEmpty())
        delete Remove();
}

void LinkedList::Insert(BookNode* book)
{
    if (book == nullptr)
        return;

    book->next = head;
    head = book;
    count++;
}

BookNode* LinkedList::Remove()
{
    if (IsEmpty())
        return nullptr;

    BookNode* book = head;
    head = head->next;
    book->next = nullptr;
    count--;
    return book;
}

bool LinkedList::IsEmpty() const
{
    return head == nullptr;
}

bool LinkedList::IsNotEmpty() const
{
    return head != nullptr;
}

void LinkedList::InsertAt(BookNode* book, int index)
{
    if (book == nullptr)
        return;

    if (index < 0)
        index = 0;
    if (index > count)
        index = count;

    if (index == 0)
    {
        Insert(book);
        return;
    }

    BookNode* previous = GetNodeAt(index - 1);
    book->next = previous->next;
    previous->next = book;
    count++;
}

BookNode* LinkedList::RemoveAt(int index)
{
    if (IsEmpty())
        return nullptr;

    if (index < 0)
        index = 0;
    if (index >= count)
        index = count - 1;

    if (index == 0)
        return Remove();

    BookNode* previous = GetNodeAt(index - 1);
    BookNode* book = previous->next;
    previous->next = book->next;
    book->next = nullptr;
    count--;
    return book;
}

void LinkedList::Swap(int index1, int index2)
{
    if (index1 < 0 || index1 >= count ||
        index2 < 0 || index2 >= count ||
        index1 == index2)
        return;

    CopyBookData(GetNodeAt(index1), GetNodeAt(index2));
}

void LinkedList::Sort()
{
    for (BookNode* i = head; i != nullptr; i = i->next)
    {
        for (BookNode* j = i->next; j != nullptr; j = j->next)
        {
            if (i->bookID > j->bookID)
                CopyBookData(i, j);
        }
    }
}

void LinkedList::Reverse()
{
    BookNode* previous = nullptr;
    BookNode* current = head;

    while (current != nullptr)
    {
        BookNode* next = current->next;
        current->next = previous;
        previous = current;
        current = next;
    }

    head = previous;
}

void LinkedList::Print() const
{
    std::cout << "\nIndex\tBook ID\tTitle\n";
    std::cout << "-----------------------------------\n";

    BookNode* current = head;
    int index = 0;
    while (current != nullptr)
    {
        std::cout << index << "\t"
                  << current->bookID << "\t"
                  << current->title << std::endl;
        current = current->next;
        index++;
    }

    std::cout << "Total books: " << count << std::endl;
}

int LinkedList::GetCount() const
{
    return count;
}

BookNode* CreateBook(int id, const std::string& title)
{
    return new BookNode{id, title, nullptr};
}
