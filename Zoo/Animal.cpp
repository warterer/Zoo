#include "Animal.h"

Animal::Animal()
{
    name = "#unknown";
    isPredator = false;
}

Animal::Animal(string name, bool isPredator)
{
    setName(name);
    setIsPredator(isPredator);
}

Animal::~Animal()
{
}

string Animal::getName() const
{
    return name;
}

bool Animal::getIsPredator() const
{
    return isPredator;
}

void Animal::setName(string name)
{
    this->name = name;
}

void Animal::setIsPredator(bool isPredator)
{
    this->isPredator = isPredator;
}
