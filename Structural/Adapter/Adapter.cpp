#include "Adapter.h"

Adapter::Adapter(Adaptee *adpt)
    : adaptee(adpt) {}

string Adapter::Request() const
{
    string to_reverse = this->adaptee->SpecificRequest();
    std::reverse(to_reverse.begin(), to_reverse.end());
    return "Adapter: (TRANSLATED) " + to_reverse;
}
