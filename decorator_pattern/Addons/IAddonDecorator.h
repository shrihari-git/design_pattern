#pragma once

#include <memory>

#include "Beverage/IBeverage.h"

class IAddonDecorator: public IBeverage{
protected:
    std::shared_ptr<IBeverage> m_beverage;
public:
    virtual float cost() = 0;
};