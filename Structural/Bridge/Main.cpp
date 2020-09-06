
#include <iostream>
#include "Abstraction.h"
#include "Implementation.h"
#include "ConcreteImplementationA.h"
#include "ConcreteImplementationB.h"
#include "ExtendedAbstraction.h"

// Client code for testing
void ClientCode(const Abstraction &abstraction);

int main()
{
    // The client should be able to work with any pre-configured abstraction implementation combination
    Implementation *implemenation = new ConcreteImplementationA;
    Abstraction *abstraction = new Abstraction(implemenation);
    ClientCode(*abstraction);

    std::cout << std::endl;
    delete implemenation;
    delete abstraction;

    implemenation = new ConcreteImplementationB;
    abstraction = new ExtendedAbstraction(implemenation);
    ClientCode(*abstraction);

    delete implemenation;
    delete abstraction;

    return 0;
}

/**
 * Except for the initialization phase, where an Abstraction gets linked with a specific
 * Implementation object, the client code should only depend on the Abstraction class. This way
 * client code can support any abstraction implementation combination.
 **/

void ClientCode(const Abstraction &abstraction)
{
    std::cout << abstraction.Operation();
}