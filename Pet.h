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
    virtual void huntingTimeonAir(){
        flyspeed = flyspeed + 100;
    }
    virtual void huntingTimeonTree(){
        runspeed = runspeed + 15;
    }
    virtual void setMood(bool newfeeling){
        isAngry = newfeeling;
    }

};



#endif 
