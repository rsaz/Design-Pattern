/**
 * Singleton class defines a method as an alternative to constructor and lets the client access the same
 * instance of this class over and over.
 **/
#include <iostream>
#include <string>

using std::string;

#pragma once

class Singleton
{
protected:
    string value;
    static Singleton *singleton;
    Singleton(const string value);
public:
    Singleton(Singleton &other) = delete;
    void operator=(const Singleton &) = delete;

    static Singleton *GetInstance(const string &value);
    string GetValue() const;
};
