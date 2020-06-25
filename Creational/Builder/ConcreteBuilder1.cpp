#include "ConcreteBuilder1.h"

ConcreteBuilder1::ConcreteBuilder1()
{
    this->Reset();
}

ConcreteBuilder1::~ConcreteBuilder1()
{
    delete player;
}

void ConcreteBuilder1::Reset()
{
    player = new Player();
}

void ConcreteBuilder1::Shield() const
{
    player->parts.push_back("Shield");
}

void ConcreteBuilder1::Sword() const
{
    player->parts.push_back("Sword");
}

void ConcreteBuilder1::Inventory() const
{
    player->parts.push_back("Inventory");
}

void ConcreteBuilder1::Skins() const
{
    player->parts.push_back("Skins");
}

Player *ConcreteBuilder1::GetItems()
{
    Player *result = player;
    Reset();
    return result;
}