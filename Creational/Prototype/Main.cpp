#include <iostream>

#include "Prototype.h"
#include "PrototypeFactory.h"

using std::cin;
using std::cout;
using std::endl;

void ClientCode(PrototypeFactory &pFactory);

int main()
{
    PrototypeFactory *pFactory = new PrototypeFactory();
    ClientCode(*pFactory);
    delete pFactory;

    cin.get();
}

void ClientCode(PrototypeFactory &pFactory)
{
    cout << "Lets create a prototype 1\n";
    Prototype *prototype1 = pFactory.CreatePrototype(Type::PROTOTYPE_1);
    prototype1->Method(90.f);
    delete prototype1;

    cout << "\n\n";
    cout << "Lets create a prototype 2\n";
    Prototype *prototype2 = pFactory.CreatePrototype(Type::PROTOTYPE_2);
    prototype2->Method(10.f);
    delete prototype2;
}