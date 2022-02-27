#pragma once
#include "IFlyBehavior.h"

class NoFly: public IFlyBehavior{
public:
    virtual void fly();
};