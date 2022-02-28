#pragma once

#include "Animal.h"

class Dog : public IAnimal
{
public:
    virtual std::string getName()
    {
        return "Dog";
    }
};