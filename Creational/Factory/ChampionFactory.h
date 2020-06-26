#pragma once

#include <iostream>
#include <string>

#include "IChampion.h"

using std::string;

class ChampionFactory
{
public:
    static IChampion *NewChampion(const string &champion);
};