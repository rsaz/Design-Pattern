#pragma once

#include <iostream>
#include <string>

using std::cout;
using std::endl;
using std::string;

class Prototype
{
protected:
    string prototypeName;
    float prototypeField;

public:
    Prototype();
    Prototype(string pName);
    virtual ~Prototype();
    virtual Prototype *Clone() const = 0;
    virtual void Method(float pField);
};