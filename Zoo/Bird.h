#pragma once
#include "Animal.h"
class Bird :
    public Animal
{
protected:
    int flightSpeed;
public:
    Bird();
    Bird(string name, bool isPredator, int flightSpeed);
    void setFlightSpeed(int flightSpeed);
    int getFlightSpeed()const;
    void show()const override;
};

