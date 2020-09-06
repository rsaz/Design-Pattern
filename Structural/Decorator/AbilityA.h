#pragma once
#include "Decorator.h"

class AbilityA : public Decorator
{
public:
    AbilityA(Component *component) : Decorator(component){};
    std::string Operation() const override
    {
        return "Ability A (" + Decorator::Operation() + ")";
    }
};