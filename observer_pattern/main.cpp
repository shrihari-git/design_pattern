#include <iostream>
#include <memory>

#include "Observable/WeatherStation.h"
#include "Observer/PhoneDisplay.h"
#include "Observer/CityDisplay.h"

int main(){
    std::shared_ptr<IObservable> weatherStation = std::make_shared<WeatherStation>();

    std::shared_ptr<PhoneDisplay> phone = std::make_shared<PhoneDisplay>(weatherStation);
    std::shared_ptr<CityDisplay> city = std::make_shared<CityDisplay>(weatherStation);

    weatherStation->setTemperature(30.1f);
    weatherStation->setTemperature(32.7f);
    weatherStation->setTemperature(28.5f);
    
    std::cin.get();
	return 0;
}