#pragma once

#include "../Animal/Animal.h"
class IAnimalFactory{
public:
    virtual IAnimal* getAnimal() = 0;
};