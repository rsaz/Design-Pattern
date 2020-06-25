#include "ConcretePrototype2.h"

ConcretePrototype2::ConcretePrototype2(string pName, float cpField)
    : Prototype(pName), concretePrototypeField2(cpField)
{
}

Prototype *ConcretePrototype2::Clone() const
{
    return new ConcretePrototype2(*this);
}