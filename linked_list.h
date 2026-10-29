#ifndef LINKED_LIST_H
#define LINKED_LIST_H

#include <string>

struct BookNode
{
    int bookID;
    std::string title;
    BookNode* next;
};

class LinkedList
{
private:
    BookNode* head;
    int count;

    BookNode* GetNodeAt(int index) const;
    void CopyBookData(BookNode* first, BookNode* second);
    void SwapContents(LinkedList& other);

public:
    LinkedList();
    LinkedList(const LinkedList& other);
    LinkedList& operator=(const LinkedList& other);
    ~LinkedList();

    void Insert(BookNode* book);
    BookNode* Remove();
    bool IsEmpty() const;
    bool IsNotEmpty() const;
    void InsertAt(BookNode* book, int index);
    BookNode* RemoveAt(int index);
    void Swap(int index1, int index2);
    void Sort();
    void Reverse();
    void Print() const;
    int GetCount() const;
};

BookNode* CreateBook(int id, const std::string& title);

#endif
