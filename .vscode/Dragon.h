#include "Pet.h"
using namespace std;
#include <iostream>


class Dragon : public Pet{
    public:
        Dragon(string n, string t){
            name = n;
            type = t;
            location = "Moon";
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
int getHunger()
{
    return hunger;
}
void playTime(){
 hunger += 10;
 energy = energy - 10;
    }
    virtual void eatTime(){
        hunger = 0;
        energy += 100;
    }
 void huntingTimeonAir(){
        flyspeed = flyspeed + 100;
    }

};