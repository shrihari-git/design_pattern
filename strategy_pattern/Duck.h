#pragma once

#include "DisplayBehavior/IDisplayBehavior.h"
#include "FlyBehavior/IFlyBehavior.h"
#include "QuackBehavior/IQuackBehavior.h"

class Duck
{
public:
    std::shared_ptr<IDisplayBehavior> displayBehavior;
    std::shared_ptr<IFlyBehavior> flyBehavior;
    std::shared_ptr<IQuackBehavior> quackBehavior;

    Duck(std::shared_ptr<IDisplayBehavior> db
        , std::shared_ptr<IFlyBehavior> fb
        , std::shared_ptr<IQuackBehavior> qb)
            : displayBehavior(db),
            flyBehavior(fb),
            quackBehavior(qb){

    }

    void display(){
        displayBehavior->display();
    }
    
    void fly() {
        flyBehavior->fly();
    }

    void quack() {
        quackBehavior->quack();
    }
};


