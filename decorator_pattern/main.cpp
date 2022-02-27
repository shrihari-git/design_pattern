#include <iostream>
#include <memory>

#include "Beverage/Espresso.h"
#include "Addons/Caramel.h"
#include "Addons/Chocolate.h"

int main(){
    //suppose we need a double chocolate caramel espresso coffee
    std::shared_ptr<IBeverage> dccEspresso = std::make_shared<Chocolate>(
        std::make_shared<Chocolate>(
            std::make_shared<Caramel>(
                std::make_shared<Espresso>()
            )
        )
    );

    std::cout << "Cost of Double Chocolate Caramel Espresso is: " << dccEspresso->cost() << std::endl;

    std::cin.get();
    return 0;
}