#ifndef INPUT_H
#define INPUT_H

#include <string>

bool ReadInt(const std::string& prompt, int& value);
bool ReadBookDetails(int& id, std::string& title);

#endif
