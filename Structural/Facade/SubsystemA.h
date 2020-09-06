#pragma once
#include <string>

// Subsystem with its complexities
class SubsystemA
{
public:
    std::string Loading() const { return "Subsystem A: Ready!\n"; }
    std::string Operation() const { return "Subsystem A: Executing operation\n"; }
    std::string ReleasingResource() const { return "Subsystem A: Releasing resources\n"; }
};