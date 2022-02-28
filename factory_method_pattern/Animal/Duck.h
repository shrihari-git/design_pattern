#pragma once

#include "Animal.h"

class Duck : public IAnimal
{
public:
    virtual std::string getName()
    {
        return "Duck";
    }
};