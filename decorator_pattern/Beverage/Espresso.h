#pragma once

#include "IBeverage.h"

class Espresso : public IBeverage
{
public:
    virtual float cost() {
        return 10.0f;
    }
};