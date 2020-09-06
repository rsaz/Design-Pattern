#pragma once
#include "SubsystemA.h"
#include "SubsystemB.h"

class Facade
{
protected:
    SubsystemA *_subsystemA;
    SubsystemB *_subsystemB;

public:
    Facade(SubsystemA *subsystemA = nullptr, SubsystemB *subsystemB = nullptr)
    {
        _subsystemA = subsystemA ?: new SubsystemA;
        _subsystemB = subsystemB ?: new SubsystemB;
    }

    ~Facade()
    {
        delete _subsystemA;
        delete _subsystemB;
    }

    std::string SimpleInterface()
    {
        std::string result = "Facade initializes subsystems:\n";
        result += this->_subsystemA->Operation();
        result += this->_subsystemB->Operation();
        result += "Facade orders subsystems to perform the action:\n";
        result += this->_subsystemA->Loading();
        result += this->_subsystemA->Operation();
        result += this->_subsystemA->ReleasingResource();
        result += this->_subsystemB->DataLoading();
        result += this->_subsystemB->Operation();
        result += this->_subsystemB->CommitData();
        return result;
    }
};