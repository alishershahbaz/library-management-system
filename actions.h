#ifndef ACTIONS_H
#define ACTIONS_H

#include "linked_list.h"

void DisplayBooks(const LinkedList& library);
bool InsertBookAtHead(LinkedList& library);
void RemoveBookFromHead(LinkedList& library);
bool InsertBookAtIndex(LinkedList& library);
bool RemoveBookAtIndex(LinkedList& library);
bool SwapBooks(LinkedList& library);
void SortBooksById(LinkedList& library);
void ReverseBookCollection(LinkedList& library);
void CheckCollectionStatus(const LinkedList& library);

#endif
