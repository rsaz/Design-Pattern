#include "Singleton.h"

Singleton::Singleton(const string v) : value(v) {}

string Singleton::GetValue() const
{
    return value;
}

