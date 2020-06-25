#include <iostream>

#include "Player.h"
#include "Builder.h"
#include "ConcreteBuilder1.h"
#include "Manual.h"

using std::cin;
using std::cout;
using std::endl;

void ClientCode(Manual &manual);

int main()
{
    Manual *m = new Manual();
    ClientCode(*m);

    cin.get();
}

void ClientCode(Manual &Manual)
{
    // Construction of the basic player
    ConcreteBuilder1 *builder = new ConcreteBuilder1();
    Manual.SetBuilder(builder);
    cout << "Standard Player \n";
    Manual.BuildBasicPlayer();

    Player *p = builder->GetItems();
    p->ListParts();
    delete p;

    // construction of the full player
    cout << "Full Player Feature \n";
    Manual.BuildFullFeaturesPlayer();
    Player *fp = builder->GetItems();
    fp->ListParts();
    delete fp;

    // builder pattern can be used without the manual
    cout << "Custom Player\n";
    builder->Inventory();
    builder->Shield();
    Player *cp = builder->GetItems();
    cp->ListParts();
    delete cp;

    // construction of Inventory and Shield Player
    cout << "Player Inventory and Shield\n";
    Manual.BuildInvetoryShield();
    Player *isp = builder->GetItems();
    isp->ListParts();
    delete isp;
}