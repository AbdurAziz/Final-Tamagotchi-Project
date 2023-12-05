#include "Pet.h"
using namespace std;
#include <iostream>


class Panda: public Pet{
    public:
    Panda(string n, string t){
         name = n;
         type = t;
         location = "Japan";
         hunger = 0;
         energy = 100;
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

virtual void playTime(){
        hunger += 10;
        energy = energy - 10;
    }
    virtual void eatTime(){
        hunger = 0;
        energy += 100;
    }

virtual void huntingTimeonTree(){
        runspeed = runspeed + 15;
    }
virtual void setMood(bool newfeeling){
        isAngry = newfeeling;
}


};
