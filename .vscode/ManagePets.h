#ifndef MANAGEPETS_H
#define MANAGEPETS_H
#include "Pet.h"

#include <iostream>


class ManagePets{
    public:
        bool MainMenu();
        bool loadGame();
        bool interact(Pet*);
        bool createAnimal();
        void nextHour(Pet*);
        void addAnimal(Pet*);
        bool petExistsorNot(Pet*);
        void saveAnimal(Pet*);
        Pet* entirePetlist();
        Pet* p;

};
#endif