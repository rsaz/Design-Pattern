#pragma once
#include <string>

// Subsystem with its complexities
class SubsystemB
{
public:
    std::string DataLoading() const { return "Subsystem B: Loading data . . .!\n"; }
    std::string Operation() const { return "Subsystem B: Executing operation\n"; }
    std::string CommitData() const { return "Subsystem B: Saving data\n"; }
};