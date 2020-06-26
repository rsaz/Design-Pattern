#pragma once

#include "IChampion.h"

class Blitz : public IChampion
{
public:
    void Move() override;
    void UseSpell() override;
    virtual ~Blitz(){};
};