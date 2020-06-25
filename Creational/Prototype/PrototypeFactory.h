#pragma once

#include <iostream>
#include <unordered_map>

#include "Prototype.h"

using std::unordered_map;

enum Type
{
    PROTOTYPE_1 = 0,
    PROTOTYPE_2
};

class PrototypeFactory
{
private:
    unordered_map<Type, Prototype *, std::hash<int>> prototypes;

public:
    PrototypeFactory();
    ~PrototypeFactory();

    Prototype* CreatePrototype(Type t);
};