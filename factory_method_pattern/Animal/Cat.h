#pragma once

#include "Animal.h"

class Cat : public IAnimal
{
public:
    virtual std::string getName()
    {
        return "Cat";
    }
};