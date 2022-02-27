#pragma once

#include <iostream>
#include "IObserver.h"
#include "Observable/IObservable.h"

class CityDisplay: public IObserver{
protected:
    std::shared_ptr<IObservable> m_observable;

public:
    CityDisplay(std::shared_ptr<IObservable> observable) {
        m_observable = observable;
        m_observable->add(this);
    }

    virtual void update(float temperature) {
        std::cout << "City Display: Temp (" << temperature << ") Celsius\n";
    }
};