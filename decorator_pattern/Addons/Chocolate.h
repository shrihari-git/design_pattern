#pragma once

#include "IAddonDecorator.h"

class Chocolate : public IAddonDecorator{
public:
    Chocolate(std::shared_ptr<IBeverage> beverage){
        m_beverage = beverage;
    }

    virtual float cost() {
        return m_beverage->cost() + 3.0f;
    }
};