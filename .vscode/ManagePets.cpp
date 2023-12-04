#ifndef MANAGE_H
#define MANAGE_H
#include "Pet.h"
using namespace std;
#include <iostream>


class ManagePets{
    public:
        bool MainMenu();
        bool load();
        bool interact(Pet*);
        bool createAnimal();
        void nextHour();
        void addAnimal(Pet*);
        void saveAnimal(Pet*);
        Pet* displayPets();
        Pet* p;

};
#endif