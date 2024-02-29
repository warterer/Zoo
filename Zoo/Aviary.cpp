#include "Aviary.h"

Aviary::Aviary()
{
	id = 0;
	maxNumOfAnimals = 0;
	currentNumOfAnimals = 0;
}

Aviary::Aviary(int id, int maxNumOfAnimals, int currentNumOfAnimals)
{
	setId(id);
	setMaxNumOfAnimals(maxNumOfAnimals);
	setCurrentNumOfAnimals(currentNumOfAnimals);
}

Aviary::~Aviary()
{
	for (auto animal : animals) 
	{
		delete animal;
	}
}

void Aviary::setId(int id)
{
	this->id = id;
}

void Aviary::setMaxNumOfAnimals(int maxNumOfAnimals)
{
	this->maxNumOfAnimals = maxNumOfAnimals;
}

void Aviary::setCurrentNumOfAnimals(int currentNumOfAnimals)
{
	this->currentNumOfAnimals = currentNumOfAnimals;
}

int Aviary::getId() const
{
	return id;
}

int Aviary::getMaxNumOfAnimals() const
{
	return maxNumOfAnimals;
}

int Aviary::getCurrentNumOfAnimals() const
{
	return currentNumOfAnimals;
}

void Aviary::show() const
{
	int j = 1;
	for (auto animal : animals) 
	{
		cout << "\t#" << j++ << endl;
		animal->show();
	}
}

void Aviary::addAnimal(Animal* animal)
{
	if (animal->getName().empty()) 
	{
		throw NameException();
	}
	if (!animals.empty())
	{
		if (animal->getIsPredator() == true)
		{
			for (auto existingAnimals : animals) 
			{
				if (existingAnimals->getIsPredator() == false) 
				{
					throw PredatorException();
					break;
				}
			}
		}
	}
	if (animals.size() >= maxNumOfAnimals) 
	{
		throw MaxCapacityException();
	}
	animals.push_back(animal);
	currentNumOfAnimals++;
}

void Aviary::delAnimal(string name)
{
	for (int i = 0; i < animals.size(); i++)
	{
		if (animals[i]->getName() == name)
		{
			delete animals[i];
			animals.erase(animals.begin() + i);
			--i;
			currentNumOfAnimals--;
			return;
		}
	}
	cout << "Animal with name " << name << " is not found\n";
}

Animal* Aviary::findAnimal(string name)
{
	for (auto animal : animals)
	{
		if (animal->getName() == name)
		{
			return animal;
		}
	}
	return nullptr;
}

void Aviary::createFish()
{
	string name;
	int isPredator;
	int isDeepWater;
	cout << "Enter name: ";
	getline(cin, name);
	cout << "Is Predator?(1 - yes, 0 - no): ";
	cin >> isPredator;
	cout << "Is DeepWater?(1 - yes, 0 - no): ";
	cin >> isDeepWater;
	Fish* fish = new Fish(name, isPredator, isDeepWater);
	addAnimal(fish);
}

void Aviary::createBird()
{
	string name;
	int isPredator;
	int flightSpeed;
	cout << "Enter name: ";
	getline(cin, name);
	cout << "Is Predator?(1 - yes, 0 - no): ";
	cin >> isPredator;
	cout << "Enter flight speed: ";
	cin >> flightSpeed;
	Bird* bird = new Bird(name, isPredator, flightSpeed);
	addAnimal(bird);
}

void Aviary::createBeast()
{
	string name;
	int isPredator;
	string habitat;
	cout << "Enter name: ";
	getline(cin, name);
	cout << "Is Predator?(1 - yes, 0 - no): ";
	cin >> isPredator;
	cout << "Enter habitat: ";
	cin >> habitat;
	Beast* beast = new Beast(name, isPredator, habitat);
	addAnimal(beast);
}
