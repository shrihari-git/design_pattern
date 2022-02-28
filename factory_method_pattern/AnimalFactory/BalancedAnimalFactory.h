#pragma once

#include "IAnimalFactory.h"

#include "../Animal/Cat.h"
#include "../Animal/Dog.h"
#include "../Animal/Duck.h"

class BalancedAnimalFactory: public IAnimalFactory{
static int num;
public:
    virtual IAnimal* getAnimal() {
        num++;
        num = num % 3;

        switch (num)
        {
        case 0:
            return new Cat();
        case 1:
            return new Dog();
        case 2:
            return new Duck();
        
        default:
            return nullptr;
        }
    };
};

int BalancedAnimalFactory::num = -1;