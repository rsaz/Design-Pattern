#pragma once
#include <string>
/**
 * The Implementation class defines the interface for all implementation classes.
 **/

class Implementation
{
public:
    virtual ~Implementation(){};
    virtual std::string OperationImplementation() const = 0;
};