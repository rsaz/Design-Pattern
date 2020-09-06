#pragma once
#include <list>

#include "Component.h"

class Composite : public Component
{
private:
    std::string _name;

protected:
    std::list<Component *> _children;

public:
    Composite(std::string name) : _name(name) {}
    void Add(Component *component) override
    {
        _children.push_back(component);
        component->SetParent(this);
    }

    void Remove(Component *component) override
    {
        _children.remove(component);
        component->SetParent(nullptr);
    }

    bool IsComposite() const override { return true; }

    std::string Operation() const override
    {
        std::string result;
        for (const Component *c : _children)
        {
            if (c == _children.back())
            {
                result += c->Operation();
            }
            else
            {
                result += c->Operation() + " + ";
            }
        }
        return _name + " (" + result + ") ";
    }
};