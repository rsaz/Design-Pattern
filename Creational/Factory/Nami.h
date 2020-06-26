#pragma once

#include "IChampion.h"

class Nami : public IChampion
{
public:
    void Move() override;
    void UseSpell() override;
    virtual ~Nami(){};
};