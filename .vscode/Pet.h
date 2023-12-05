#ifndef PET_H
#define PET_H
#include <string>
using namespace std;

using namespace std;

class Pet {

protected:
    string name;
    string location;
    string type;
    int hunger;
    int energy;
    // extra variables that make this program creative at a simple level in my opinion
    int flyspeed;
    int runspeed;
    int fireorbreathpower;
    bool isAngry;
    int clean;


public:
    Pet(){
        name = "";
        location = "Texas";
        energy = 100;
    }
    virtual void setName(string n){
        name = n;
    }
    virtual void setHunger(int h){
        hunger = h;
    }
    virtual void setLocation(string newLocation){
        location = newLocation;
    }
    virtual void setType(string t)
    {
        type = t;
    }
    virtual void setEnergy(int e)
    {
        energy = e;
    }

    virtual string getName(){
        return name;
    }

    virtual string getLocation(){
        return location;
    }
    virtual string getType()
    {
        return type;
    }
    virtual int getEnergy()
    {
        return energy;
    }
    virtual int getHunger()
    {
        return hunger;
    }

    virtual int getFlySpeed(){
        return flyspeed;
    }

    virtual int getRunSpeed(){
        return runspeed;
    }

    virtual int fireorBreathPower(){
        return fireorbreathpower;
    }
    virtual bool getMood(){
        return isAngry;
    }

    virtual int getClean(){
        return clean;
    }

    virtual void setClean(int c)
    {
        clean = c;
    }


   virtual void setFireorBreathPower(int f){
        fireorbreathpower = f;
   }

    virtual void playTime(){
        hunger += 10;
        energy = energy - 10;
    }
    virtual void eatTime(){
        hunger = 0;
        energy += 100;
    }

    virtual void sleepTime(){ // you get hungry as you sleep
        energy = energy + 5;
        hunger = hunger - 15;
    }

    virtual void huntingTimeonAir(){   // pet wants to jump in the air for freedom. Hooray
        flyspeed = flyspeed + 100;
    }
    virtual void huntingTimeonTree(){  // Pet wants to go on a tree to go hunting
        runspeed = runspeed + 15;
    }
    virtual void setMood(bool newfeeling){
        isAngry = newfeeling;
    }
    virtual void jumpInAir(){    // Pet is gong to jump in the air 
        energy = energy - 20;
        flyspeed = flyspeed + 45;
    }



};



#endif 

