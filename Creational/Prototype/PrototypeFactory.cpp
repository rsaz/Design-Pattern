#include "PrototypeFactory.h"
#include "ConcretePrototype1.h"
#include "ConcretePrototype2.h"

PrototypeFactory::PrototypeFactory()
{
    prototypes[Type::PROTOTYPE_1] = new ConcretePrototype1("PROTOTYPE_1", 50.f);
    prototypes[Type::PROTOTYPE_2] = new ConcretePrototype2("PROTOTYPE_2", 60.f);
}

PrototypeFactory::~PrototypeFactory()
{
    delete prototypes[Type::PROTOTYPE_1];
    delete prototypes[Type::PROTOTYPE_2];
}

Prototype *PrototypeFactory::CreatePrototype(Type t)
{
    prototypes[t]->Clone();
}