#pragma once
#include <iostream>
#include <string>
using namespace std;

class Animal
{
protected:
	string name;
	bool isPredator;
public:
	Animal();
	Animal(string name, bool isPredator);
	virtual ~Animal();
	string getName()const;
	bool getIsPredator()const;

	void setName(string name);
	void setIsPredator(bool isPredator);

	virtual void show()const = 0;
};

