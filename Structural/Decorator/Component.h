#pragma once
#include <string>

class Component
{
public:
    virtual ~Component() {}
    virtual std::string Operation() const = 0;
};