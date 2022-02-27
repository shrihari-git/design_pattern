#pragma once

#include "IAddonDecorator.h"

class Caramel : public IAddonDecorator{
public:
    Caramel(std::shared_ptr<IBeverage> beverage){
        m_beverage = beverage;
    }

    virtual float cost() {
        return m_beverage->cost() + 1.5f;
    }
};