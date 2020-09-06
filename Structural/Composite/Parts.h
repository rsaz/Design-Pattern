#pragma once
#include "Component.h"

class Parts : public Component
{
private:
    std::string _name;

public:
    Parts(std::string name) : _name(name) {}
    std::string Operation() const override { return _name; }
};