#pragma once
#include "Implementation.h"

class Abstraction
{
protected:
    Implementation *_implementation;

public:
    Abstraction(Implementation *implementation) : _implementation(implementation) {}
    virtual ~Abstraction() {}

    virtual std::string Operation() const
    {
        return "Abstraction: Base operation with:\n" + this->_implementation->OperationImplementation();
    }
};