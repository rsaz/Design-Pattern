#pragma once

#include <iostream>
#include <string>

using std::string;
/**
 * Target Class defines the domain-specific interface used by the client
 **/

class Target
{
public:
    virtual string Request() const;
    virtual ~Target() = default;
};