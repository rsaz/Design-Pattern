#pragma once

#include <iostream>
#include "Prototype.h"

class ConcretePrototype2 : public Prototype
{
private:
    float concretePrototypeField2;

public:
    ConcretePrototype2(string pName, float cpField);
    Prototype *Clone() const override;
};