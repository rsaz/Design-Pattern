#include <iostream>
#include "Target.h"
#include "Adaptee.h"
#include "Adapter.h"

using std::cin;

void ClientCode(const Target *target);

int main()
{
    std::cout << "Client: Work fine with the target objects\n";
    Target *target = new Target;
    ClientCode(target);
    std::cout << "\n\n";

    Adaptee *adaptee = new Adaptee;
    std::cout << "Client: Adaptee class has weird interface. Needs to be organized before use it\n";
    std::cout << "Adaptee-> " << adaptee->SpecificRequest() << std::endl;
    std::cout << std::endl;

std:
    std::cout << "Client-> But I can work with it via the adapter class created\n";
    auto *adapter = new Adapter{adaptee};
    ClientCode(adapter);

    delete target;
    delete adaptee;
    delete adapter;

    cin.get();
}

void ClientCode(const Target *target)
{
    std::cout << target->Request();
}