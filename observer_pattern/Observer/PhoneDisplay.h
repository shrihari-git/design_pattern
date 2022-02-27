#pragma once

#include <iostream>
#include "IObserver.h"
#include "Observable/IObservable.h"

class PhoneDisplay: public IObserver{
protected:
    std::shared_ptr<IObservable> m_observable;
public:
    PhoneDisplay(std::shared_ptr<IObservable> observable) {
        m_observable = observable;
        m_observable->add(this);
    }
    virtual void update(float temperature) {
        std::cout << "Phone Display: Temp (" << temperature << ") Celsius\n";
    }
};