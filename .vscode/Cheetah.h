#include "Pet.h"
#pragma once
using namespace std;
#include <iostream>


class Cheetah : public Pet{
    public:
     Cheetah(string n, string t){
        name = n;
        type = t;
        energy = 100;
        isAngry = false;
        runspeed = 0;
    }

    void setType(string t){
        type = t;
}
    string getType(){
    return type;
}
void setName(string n){
  name = n;
}
string getName(){
  return name;
}
void setHunger(int h){
  hunger = h;
}

int getHunger(){
  return hunger;
}

int getRunSpeed(){
    return runspeed;
}

void playTime(){
    hunger += 10;
    energy = energy - 10;
}
void eatTime(){
    hunger = 0;
    energy += 100;
}
void huntingTimeonAir(){
    flyspeed = flyspeed + 100;
}
 void huntingTimeonTree(){
    runspeed = runspeed + 15;
}


};