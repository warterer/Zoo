#include "Fish.h"

Fish::Fish()
{
	isDeepWater = false;
}

Fish::Fish(string name, bool isPredator, bool isDeepWater)
	:Animal(name, isPredator)
{
	setIsDeepWater(isDeepWater);
}

bool Fish::getIsDeepWater() const
{
	return isDeepWater;
}

void Fish::setIsDeepWater(bool isDeepWater)
{
	this->isDeepWater = isDeepWater;
}

void Fish::show() const
{
	cout << "Name: " << name << endl;
	(isPredator == true) ? cout << "Is Predator\n" : cout << "Is Not Predator\n";
	(isDeepWater == true) ? cout << "Is DeepWater\n" : cout << "Is Not DeepWater\n";
}
