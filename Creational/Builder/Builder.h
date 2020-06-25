/** Builder interface specifies methods for creating the different parts
* of the product objects
*/

#pragma once

#include <iostream>

class Builder
{
public:
    virtual ~Builder(){};
    virtual void Shield() const = 0;
    virtual void Sword() const = 0;
    virtual void Inventory() const = 0;
    virtual void Skins() const = 0;
};