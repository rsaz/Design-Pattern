#include "ConcretePrototype1.h"

ConcretePrototype1::ConcretePrototype1(string pName, float cpField)
    : Prototype(pName), concretePrototypeField1(cpField)
{
}

Prototype *ConcretePrototype1::Clone() const
{
    return new ConcretePrototype1(*this);
}