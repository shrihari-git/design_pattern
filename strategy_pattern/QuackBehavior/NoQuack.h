#pragma once
#include "IQuackBehavior.h"

class NoQuack: public IQuackBehavior{
public:
    virtual void quack();
};