#pragma once

class IChampion
{
public:
    virtual void Move() = 0;
    virtual void UseSpell() = 0;
    virtual ~IChampion(){};
};