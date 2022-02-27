// strategy_pattern.cpp : Defines the entry point for the application.
//

#include <memory>
#include <iostream>

#include "Duck.h"

#include "DisplayBehavior/DisplayAsText.h"

#include "FlyBehavior/SimpleFly.h"
#include "FlyBehavior/SuperFly.h"
#include "FlyBehavior/NoFly.h"

#include "QuackBehavior/NoQuack.h"
#include "QuackBehavior/SimpleQuack.h"

using namespace std;

int main()
{
	std::shared_ptr<IDisplayBehavior> textDisplay = std::make_shared<DisplayAsText>();

	std::shared_ptr<IFlyBehavior> simpleFlying = std::make_shared<SimpleFly>();
	std::shared_ptr<IFlyBehavior> superFlying = std::make_shared<SuperFly>();
	std::shared_ptr<IFlyBehavior> noFlying = std::make_shared<NoFly>();

	std::shared_ptr<IQuackBehavior> noQuack = std::make_shared<NoQuack>();
	std::shared_ptr<IQuackBehavior> quack = std::make_shared<SimpleQuack>();

	std::shared_ptr<Duck> wildDuck = std::make_shared<Duck>(textDisplay, superFlying, quack);
	std::shared_ptr<Duck> plasticDuck = std::make_shared<Duck>(textDisplay, noFlying, noQuack);

	std::cout << "Wild Duck bahaviors\n";
	wildDuck->display();
	wildDuck->fly();
	wildDuck->quack();

	std::cout << "Plastic Duck bahaviors\n";
	plasticDuck->display();
	plasticDuck->fly();
	plasticDuck->quack();

	std::cin.get();
	return 0;
}
