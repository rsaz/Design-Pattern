#pragma once
#include <string>

/**
 * Base component class declares common operations for
 * both simple and complex objects of a composition
 **/
class Component
{
protected:
    Component *_parent;
    /**
     * Optionally, the base component can declare an interface for setting and
     * accessig a parent of the component in a tree structure. It can also
     * provide some default implemenation for these methods.
     **/

public:
    virtual ~Component(){};
    void SetParent(Component *parent) { _parent = parent; }
    Component *GetParent() const { return _parent; }

    /**
     * Some cases is a good idea to define the child-management operations
     * right in the base component class, this way you won't need to expose
     * any concrete component classes to the client code
     **/

    virtual void Add(Component *component){};
    virtual void Remove(Component *component){};

    virtual bool IsComposite() const { return false; }
    virtual std::string Operation() const = 0;
};