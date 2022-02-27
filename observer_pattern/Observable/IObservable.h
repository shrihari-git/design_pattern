#pragma once

#include <vector>

#include "../Observer/IObserver.h"

class IObservable{
protected:
    std::vector<IObserver*> observers;
    virtual void notify() = 0;
public:
    virtual void add(IObserver* ob) {
        observers.push_back(ob);
    }
    virtual void remove(IObserver* ob) {
        std::remove(observers.begin(), observers.end(), ob);
    }
    
    virtual void setTemperature(float newTemp) = 0;
};