#pragma once
#include "Component.h"
class Decorator : public Component
{
protected:
    Component *_component;

public:
    Decorator(Component *component) : _component(component) {}

    std::string Operation() const override
    {
        return _component->Operation();
    }
};