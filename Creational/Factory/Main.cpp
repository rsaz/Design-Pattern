#include <iostream>
#include <string>

#include "ChampionFactory.h"
#include "IChampion.h"
#include "Nami.h"
#include "Blitz.h"

using std::cin;
using std::cout;
using std::endl;
using std::string;

IChampion *ChampionFactory::NewChampion(const string &champion)
{
    if (champion == "nami")
    {
        return new Nami{};
    }
    else if (champion == "blitz")
    {
        return new Blitz{};
    }
    return nullptr;
}

int main()
{
    auto champion = ChampionFactory::NewChampion("nami");
    champion->Move();
    champion->UseSpell();
    cin.get();
}