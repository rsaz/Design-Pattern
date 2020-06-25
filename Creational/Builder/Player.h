#pragma once

#include <iostream>
#include <vector>

using std::cout;
using std::string;
using std::vector;

class Player
{
public:
    vector<string> parts;
    void ListParts() const;
};