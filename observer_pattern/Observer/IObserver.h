#pragma once

class IObserver{
public:
    virtual void update(float temperature) = 0;
};