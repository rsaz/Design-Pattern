#include <iostream>
#include "Component.h"
#include "ConcreteComponent.h"
#include "Decorator.h"
#include "AbilityA.h"

void ClientCode(Component *component);

int main()
{

    Component *simple = new ConcreteComponent;
    std::cout << "Client : I've got a simple component:\n";
    ClientCode(simple);
    std::cout << "\n\n";

    Component *ability1 = new AbilityA(simple);
    std::cout << "Client : I've got a ability component:\n";
    ClientCode(ability1);
    std::cout << "\n\n";

    delete simple;
    delete ability1;

    return 0;
}

void ClientCode(Component *component)
{
    std::cout << "RESULT: " << component->Operation();
}