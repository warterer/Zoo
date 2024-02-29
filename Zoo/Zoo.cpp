#include <iostream>
#include "Exception.h"
#include "Animal.h"
#include "Aviary.h"
#include "Beast.h"
#include "Bird.h"
#include "Fish.h"
int main()
{
    Aviary aviary(4, 2, 0);
    int menu = 0;
	do
	{
        cout << "\tMenu:\n";
        cout << "1. Add Animal\n";
        cout << "2. Remove Animal\n";
        cout << "3. Search Animal\n";
        cout << "4. Show Aviary\n";
        cin >> menu;
        switch (menu)
        {
        case 1:
            try 
            {
                int type;
                cout << "Select animal Type (1 - Fish, 2 - Bird, 3 - Beast): ";
                cin >> type;
                cin.ignore();
                switch (type) 
                {
                case 1:
                    aviary.createFish();
                    break;
                case 2:
                    aviary.createBird();
                    break;
                case 3:
                    aviary.createBeast();
                    break;
                default:
                    cout << "Invalid animal type\n";
                    break;
                }
            }
            catch (ZooException& err) 
            {
                cout << err.showMessage() << endl;
            }
            break;
        case 2:
            try 
            {
                string name;
                cout << "Enter name of the animal to delete: ";
                cin.ignore();
                getline(cin, name);
                aviary.delAnimal(name);
            }
            catch (ZooException& err)
            {
                cout << err.showMessage() << endl;
            }
            break;
        case 3:
            try
            {
                string name;
                cout << "Enter name of the animal to search: ";
                cin.ignore();
                getline(cin, name);
                Animal* foundAnimal = aviary.findAnimal(name);
                if (foundAnimal != nullptr) 
                {
                    cout << "\tAnimal: \n";
                    foundAnimal->show();
                }
                else 
                {
                    cout << "Animal not found\n";
                }
            }
            catch (ZooException& err)
            {
                cout << err.showMessage() << endl;
            }
            break;
        case 4:
            aviary.show();
            break;
        default:
            cout << "Error!\n";
            break;
        }
	} while (menu != 0);
}
 
