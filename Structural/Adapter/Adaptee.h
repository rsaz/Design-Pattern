#pragma once
#include <iostream>
#include <string>
using std::string;
/**
 * this class contains some behavior need it, but its interface is not compatible
 * with the existing client code. The adaptee needs some adaptation before the
 * client code can use it
 **/

class Adaptee
{
public:
    string SpecificRequest() const;
};