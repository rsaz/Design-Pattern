#include <iostream>
#include "Singleton.h"

using std::cin;
using std::cout;
using std::endl;

Singleton *Singleton::GetInstance(const string &value)
{
    if (singleton == nullptr)
    {
        singleton = new Singleton(value);
    }
    return singleton;
}

Singleton *Singleton::singleton = nullptr;

int main()
{
    Singleton *s = Singleton::GetInstance("Core Instance");
    cout << s->GetValue() << endl;

    Singleton *s2 = Singleton::GetInstance("Another Core");
    cout << s2->GetValue() << endl;

    cin.get();
}
