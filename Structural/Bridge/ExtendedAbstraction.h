#pragma once
#include "Abstraction.h"

class ExtendedAbstraction : public Abstraction
{
public:
    ExtendedAbstraction(Implementation *implementation)
        : Abstraction(implementation)
    {
    }

    std::string Operation() const override
    {
        return "ExtendedAbstraction: Extended operation with\n" + this->_implementation->OperationImplementation();
    }
};