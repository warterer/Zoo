#pragma once
#include <iostream>
#include <vector>
#include "Animal.h"
#include "Beast.h"
#include "Bird.h"
#include "Fish.h"
#include "Exception.h"
using namespace std;

class Aviary
{
protected:
	int id;
	int maxNumOfAnimals;
	int currentNumOfAnimals;
	vector<Animal*> animals;
public:
	Aviary();
	Aviary(int id, int maxNumOfAnimals, int currentNumOfAnimals);
	~Aviary();

	void setId(int id);
	void setMaxNumOfAnimals(int maxNumOfAnimals);
	void setCurrentNumOfAnimals(int currentNumOfAnimals);

	int getId()const;
	int getMaxNumOfAnimals()const;
	int getCurrentNumOfAnimals()const;

	void show()const;
	void addAnimal(Animal* animal);
	void delAnimal(string name);
	Animal* findAnimal(string name);
	void createFish();
	void createBird();
	void createBeast();
};