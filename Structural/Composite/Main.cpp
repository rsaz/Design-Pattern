#include <iostream>
#include "Component.h"
#include "Parts.h"
#include "Composite.h"

void ClientCode(Component *component);
void ClientCode2(Component *component1, Component *component2);

int main()
{
    // Simple component structure
    Component *simple = new Parts{"Simple part"};
    std::cout << "Client: I've got a simple component:\n";
    ClientCode(simple);
    std::cout << "\n\n";

    // Building a complex composite of components
    Component *tree = new Composite{"tree"};
    Component *branch1 = new Composite{"branch1"};

    Component *sword = new Parts{"sword"};
    Component *shield = new Parts{"shield"};
    Component *vest = new Parts{"vest"};
    branch1->Add(sword);
    branch1->Add(shield);

    Component *branch2 = new Composite{"branch2"};
    branch2->Add(vest);

    tree->Add(branch1);
    tree->Add(branch2);
    std::cout << "Client : Now I've got a composite tree:\n";
    ClientCode(tree);
    std::cout << "\n\n";

    std::cout << "Client: I don't need to check the components classes even when managing the tree:\n";
    ClientCode2(tree, simple);
    std::cout << "\n";

    delete simple;
    delete tree;
    delete branch1;
    delete branch2;
    delete sword;
    delete shield;
    delete vest;
}

void ClientCode(Component *component)
{
    std::cout << "RESULT: " << component->Operation();
}

void ClientCode2(Component *component1, Component *component2)
{
    if (component1->IsComposite())
    {
        component1->Add(component2);
    }
    std::cout << "RESULT: " << component1->Operation();
}