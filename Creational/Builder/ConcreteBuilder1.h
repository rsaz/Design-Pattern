#pragma once

#include "Builder.h"
#include "Player.h"

#include <iostream>

class ConcreteBuilder1 : public Builder
{
private:
    Player *player;

public:
    ConcreteBuilder1();
    ~ConcreteBuilder1();
    void Reset();

    void Shield() const override;
    void Sword() const override;
    void Inventory() const override;
    void Skins() const override;

    Player *GetItems();
};
