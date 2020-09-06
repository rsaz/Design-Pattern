#include <iostream>
#include "Facade.h"
#include "SubsystemA.h"
#include "SubsystemB.h"

void ClientCode(Facade *facade);

int main()
{
    SubsystemA *subsystemA = new SubsystemA;
    SubsystemB *subsystemB = new SubsystemB;

    Facade *facade = new Facade(subsystemA, subsystemB);
    ClientCode(facade);

    delete facade;

    return 0;
}

void ClientCode(Facade *facade)
{
    std::cout << "Facade Interface: " + facade->SimpleInterface() << std::endl;
}