#pragma once
#include "Animal.h"
class Beast :
    public Animal
{
protected:
    string habitat;
public:
    Beast();
    Beast(string name, bool isPredator, string habitat);
    void setHabitat(string habitat);
    string getHabitat()const;
    void show()const override;
};