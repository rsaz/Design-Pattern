#pragma once

#include <iostream>
#include "Builder.h"

class Manual
{
private:
    Builder *builder;

public:
    void SetBuilder(Builder *b);
    void BuildBasicPlayer();
    void BuildInvetoryShield();
    void BuildFullFeaturesPlayer();
};