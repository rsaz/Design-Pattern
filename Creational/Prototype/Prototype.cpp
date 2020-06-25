#include "Prototype.h"

Prototype::Prototype(){};

Prototype::Prototype(string pName) : prototypeName(pName)
{
}

Prototype::~Prototype() {}

void Prototype::Method(float pField)
{
    prototypeField = pField;
    cout << "Call method from " << prototypeName
    << " with field : " << prototypeField << endl;
}