#pragma once
#include <iostream>
#include <string>
#include <algorithm>

using std::string;

#include "Target.h"
#include "Adaptee.h"

class Adapter : public Target
{
private:
    Adaptee *adaptee;

public:
    Adapter(Adaptee *adpt);
    string Request() const override;
};
