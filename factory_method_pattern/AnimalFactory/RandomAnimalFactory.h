#pragma once

#include "IAnimalFactory.h"

#include "../Animal/Cat.h"
#include "../Animal/Dog.h"
#include "../Animal/Duck.h"

class RandomAnimalFactory: public IAnimalFactory{
public:
    virtual IAnimal* getAnimal() {
        int min = 0;
        int max = 2;
        auto randNum = rand()%(max-min + 1) + min;

        switch (randNum)
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