#pragma once

#include <iostream>
#include "Prototype.h"

class ConcretePrototype1 : public Prototype
{
private:
    float concretePrototypeField1;

public:
    ConcretePrototype1(string pName, float cpField);
    Prototype *Clone() const override;
};