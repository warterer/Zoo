#include "Bird.h"

Bird::Bird()
{
    flightSpeed = 0;
}

Bird::Bird(string name, bool isPredator, int flightSpeed)
    :Animal(name, isPredator)
{
    setFlightSpeed(flightSpeed);
}

void Bird::setFlightSpeed(int flightSpeed)
{
    this->flightSpeed = flightSpeed;
}

int Bird::getFlightSpeed() const
{
    return flightSpeed;
}

void Bird::show() const
{
    cout << "Name: " << name << endl;
    (isPredator == true) ? cout << "Is Predator\n" : cout << "Is Not Predator\n";
    cout << "Flight speed: " << flightSpeed << endl;
}
