#pragma once
#include "Animal.h"
class Fish :
    public Animal
{
protected:
    bool isDeepWater;
public:
    Fish();
    Fish(string name, bool isPredator, bool isDeepWater);
    bool getIsDeepWater()const;
    void setIsDeepWater(bool isDeepWater);
    void show()const override;
};

