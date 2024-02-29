#include "Beast.h"

Beast::Beast()
{
    habitat = "#unknown";
}

Beast::Beast(string name, bool isPredator, string habitat)
    :Animal(name, isPredator)
{
    setHabitat(habitat);
}

void Beast::setHabitat(string habitat)
{
    this->habitat = habitat;
}

string Beast::getHabitat() const
{
    return habitat;
}

void Beast::show() const
{
    cout << "Name: " << name << endl;
    (isPredator == true) ? cout << "Is Predator\n" : cout << "Is Not Predator\n";
    cout << "Habitat: " << habitat << endl;
}
