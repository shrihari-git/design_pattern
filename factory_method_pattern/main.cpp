#include <iostream>
#include <memory>

#include "AnimalFactory/BalancedAnimalFactory.h"
#include "AnimalFactory/RandomAnimalFactory.h"

int main()
{

    std::shared_ptr<IAnimalFactory> balancedFactory = std::make_shared<BalancedAnimalFactory>();
    std::shared_ptr<IAnimalFactory> randomFactory = std::make_shared<RandomAnimalFactory>();

    std::cout << "generating balanced factory animals\n";
    for (size_t i = 0; i < 10; i++)
    {
        std::cout << balancedFactory->getAnimal()->getName() << std::endl;
    }

    std::cout << "\n\n";
    std::cout << "generating random factory animals\n";
    for (size_t i = 0; i < 10; i++)
    {
        std::cout << randomFactory->getAnimal()->getName() << std::endl;
    }

    std::cin.get();
    return 0;
}