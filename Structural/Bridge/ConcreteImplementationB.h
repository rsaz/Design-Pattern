#pragma once
#include "Implementation.h"

class ConcreteImplementationB : public Implementation
{
public:
    std::string OperationImplementation() const override
    {
        return "ConcreteImplementationA: Here is the result of the platform B.\n";
    }
};