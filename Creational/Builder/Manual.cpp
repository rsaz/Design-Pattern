#include "Manual.h"

void Manual::SetBuilder(Builder *b)
{
    builder = b;
}

void Manual::BuildBasicPlayer()
{
    builder->Inventory();
}

void Manual::BuildFullFeaturesPlayer()
{
    builder->Shield();
    builder->Sword();
    builder->Inventory();
    builder->Skins();
}

void Manual::BuildInvetoryShield()
{
    builder->Inventory();
    builder->Shield();
}