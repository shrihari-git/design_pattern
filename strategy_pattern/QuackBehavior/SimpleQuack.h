#pragma once
#include "IQuackBehavior.h"

class SimpleQuack: public IQuackBehavior{
public:
    virtual void quack();
};