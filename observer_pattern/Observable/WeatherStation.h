#pragma once

#include "IObservable.h"

class WeatherStation: public IObservable{
    float temp;
    void notify(){
        for (auto itr = observers.begin(); 
            itr != observers.end(); 
            itr++)
        {
            (*itr)->update(temp);
        }
        
    }

public:
    void setTemperature(float newTemp){
        std::cout << "\nWeather Station received update temperature setting\n";
        temp = newTemp;
        notify();
    }
};