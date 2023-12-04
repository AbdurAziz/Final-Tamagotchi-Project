#include "ManagePets.h"
#include "Draw.h"
#include "Pet.h"
#include "Cheetah.h"
#include "Dragon.h"
#include "Panda.h"
#include <fstream>
#include <iostream>
#include <sstream>
#include <string>
#include <vector>

using namespace std;

bool ManagePets:: MainMenu(){
 Draw art;
  art.drawMenu();
  int option;
  cin >> option;
  if(option == 1){
    if(createAnimal()){
      return true;
    }
    else{
      return false;
    }
  }
  else if(option == 2){
    if(loadGame()){
      return true;
    }
    else{
      return false;
    }
  }
  else if(option == 3){
    exit(1);
  }
  else if(option == 4){
    cout << "Wow";
    return false;
  }
  else{
    cout << "-------------------------------------------------------------------------------------------------------------------------------------------------------------";
    cout << endl << endl << "Not a valid input!" << endl << endl;
    cout << "Enter any key to return to menu!" << endl << endl;
    string key;
    cin >>  key;
    cout << "-------------------------------------------------------------------------------------------------------------------------------------------------------------";
  
    return false;
  }
}


bool ManagePets::createAnimal(){
  
  Draw art;
  Pet* pet;
  cout << endl << "-------------------------------------------------------------------------------------------------------------------------------------------------------------";
  cout << endl << endl << "What pet would you like to own?" << endl << endl;
  cout << "Enter 1 for Cheetah!" << endl << endl;
  cout << "Enter 2 for Dragon!" << endl << endl;
  cout << "Enter 3 for Panda!" << endl << endl;
  cout << "Enter 4 to quit game!" << endl << endl;
  int choice;
  cin >> choice;
  if(choice == 1){
    string name;
    cout << endl << endl << "-------------------------------------------------------------------------------------------------------------------------------------------------------------";
    cout  << "Cheetahs spend most of their time either hunting or sleeping. They also run very fast and have lots of stamina to catch there prey." << endl << endl;
    cout << "Cheetahs are also very socialable cats, despite living in the wild." << endl;
    cout << "Dogs are naturally much happier pets and so they start the game with 100 happiness." << endl << endl;
    cout << "Because of their energetic nature however, dogs start the game with a high hunger level as well, at 80." << endl << endl;
    cout << "Now that the intro is out of the way, what would you like to name your bestfriend?" << endl << endl;
    art.drawCheetah();
    cin >> name;
    pet = new Cheetah(name, "Cheetah");
    if(!petExistsorNot(pet)){
      addAnimal(pet);
      cout << endl << "Your " << pet->getType() << " " << pet->getName() << " has been added to Play Land!" << endl;
      cout << "Enter any key to continue!" << endl << endl;
      string key;
      cin >> key;
      return false;
      cout << endl << "-------------------------------------------------------------------------------------------------------------------------------------------------------------";
    }
    else{
      cout << endl << "Your " << pet->getType() << " " << pet->getName() << " is already in Play Land!" << endl << endl;
      cout << "Enter any key to continue!" << endl << endl;
      string key;
      cin >> key;
      return false;
      cout << endl << "-------------------------------------------------------------------------------------------------------------------------------------------------------------";
    }
    cout << endl << "-------------------------------------------------------------------------------------------------------------------------------------------------------------";
  }
  if(choice == 2) {
    string name;
    cout << endl << "-------------------------------------------------------------------------------------------------------------------------------------------------------------";
    cout << endl << endl << "Great choice, cats are extremely smart animals and have their own unique starting attributes compared to the other pets!" << endl << endl;
    cout << "Cats are naturally much more laid back, and so they start the game with 100 tiredness." << endl << endl;
    cout << "Because of this lack of energy however, cats also start the game with a low hunger level, at 30." << endl << endl;
    cout << "Now that the intro is out of the way, what would you like to name your feline friend?" << endl << endl;
    art.drawDragon();
    cin >> name;
    pet = new Dragon(name, "Dragon");
    if(!petExistsorNot(pet)){
      addAnimal(pet);
      cout << endl << "Your " << pet->getType() << " " << pet->getName() << " has been added to Play Land!" << endl;
      cout << "Enter any key to continue!" << endl << endl;
      string key;
      cin >> key;
      return false;
      cout << endl << "-------------------------------------------------------------------------------------------------------------------------------------------------------------";
    }
    else{
      cout << endl << "Your " << pet->getType() << " " << pet->getName() << " is already in Play Land!" << endl << endl;
      cout << "Enter any key to continue!" << endl << endl;
      string key;
      cin >> key;
      return false;
      cout << endl << "-------------------------------------------------------------------------------------------------------------------------------------------------------------";
    }
    cout << endl << "-------------------------------------------------------------------------------------------------------------------------------------------------------------";
  }
  if(choice == 3){
    cout << endl << "-------------------------------------------------------------------------------------------------------------------------------------------------------------";
    cout << endl << endl << "Great choice, Bunnys are adorable little pets that have their own unique starting attributes compared to the other pets!" << endl << endl;
    cout << "Bunnys love to eat, and so they start the game with 100 hunger." << endl << endl;
    cout << "Because of their constant need for food however, bunnys also start the game with a low happiness level, at 30." << endl << endl;
    cout << "Now that the intro is out of the way, what would you like to name this little speedster?" << endl << endl;
    art.drawPanda();
    string name;
    cin >> name;
    pet = new Panda(name, "Panda");
    if(!petExistsorNot(pet)){
      addAnimal(pet);
      cout << endl << "Your " << pet->getType() << " " << pet->getName() << " has been added to Play Land!" << endl;
      cout << "Enter any key to continue!" << endl << endl;
      string key;
      cin >> key;
      return false;
      cout << endl << "-------------------------------------------------------------------------------------------------------------------------------------------------------------";
    }
    else{
      cout << endl << "Your " << pet->getType() << " " << pet->getName() << " is already in Play Land!" << endl << endl;
      cout << "Enter any key to continue!" << endl << endl;
      string key;
      cin >> key;
      return false;
      cout << endl << "-------------------------------------------------------------------------------------------------------------------------------------------------------------";
    }
    cout << endl << "-------------------------------------------------------------------------------------------------------------------------------------------------------------";
  }
  if(choice == 4){
    exit(1);
  }
  else{ 
    cout << endl << "-------------------------------------------------------------------------------------------------------------------------------------------------------------";
    cout << endl << endl << "Invalid choice!" << endl;
    cout << endl << "-------------------------------------------------------------------------------------------------------------------------------------------------------------";
    exit(0);
  }
  
  return false; 
}

void ManagePets::addAnimal(Pet* pet){
  string yourPet = pet->getType() + " " + pet->getName() + " " + to_string(pet->getHunger()) + " " + pet->getLocation() + " " + to_string(pet->getEnergy());

  ofstream fout;

  fout.open("GAMEFILE.TXT", ios_base::app);

  if (!fout.is_open()) {
    cout << "File not found!" << endl;
  }

  fout << yourPet << endl;
  
  fout.close();

}


bool ManagePets::petExistsorNot(Pet* pet){
  string data;
  string petName = pet->getName();
  string petType = pet->getType();
  ifstream fin;
  
  fin.open("GAMEFILE.TXT");

  if(!fin.is_open()){
    cout << "File does not exist!" << endl;
  }

   while (!fin.eof()) {
     getline(fin, data); 
     istringstream ins(data);
     
     string type;
     ins >>  type;
     string name;
     ins >> name;
  
    if ((type == petType) && (name == petName)){
      fin.close();
      return true;
    }
    
  }
  
  fin.close();
  return false;
  
}


bool ManagePets::loadGame() {
  Pet* pet = nullptr;
  cout << endl << "-------------------------------------------------------------------------------------------------------------------------------------------------------------";
  cout << endl << endl << "Welcome Back!" << endl << endl;
  cout << "What Pet would you like to continue with?" << endl << endl;
  pet = entirePetlist();
  if(pet != nullptr) {
    interact(pet);
    return false;
  }
  else{
    return false;
  }
}


bool ManagePets::interact(Pet* pet){
Draw art;
 cout << endl << "Your adorable " << pet->getType() << " "  << pet->getName() 
 << " is ready to play!" << endl << endl;
 cout << "Loading " << pet->getName() << "'s " << "stats...." << endl << endl;
 cout << "Hunger Level: " << pet->getHunger() << endl << endl;
 cout << "Location: " << pet->getLocation() << endl << endl;
 cout << "Energy: " << pet->getEnergy() << endl << endl;
  cout << "Enter any key to continue!" << endl << endl;
  string k;
  cin >> k;
 
 bool game = true;

  while(game){
    cout << endl << "-------------------------------------------------------------------------------------------------------------------------------------------------------------" << endl;
    cout << endl << "What action would you like to take?" << endl << endl;
    cout << "Enter 1 to feed " << pet->getName() << endl << endl;
    cout << "Enter 2 to play with " << pet->getName() << endl << endl;
    cout << "Enter 3 to put " << pet->getName() << " to sleep" << endl << endl;
    cout << "Enter 4 to progress to the next hour" << endl << endl;
    cout << "Enter 5 to Save your progress and quit" << endl << endl;
    int o;
    cin >> o;
    if(o == 1){
       cout << endl << "-------------------------------------------------------------------------------------------------------------------------------------------------------------" << endl;
      cout << endl << "Feeding " << pet->getName() << " apples..." << endl << endl;
      art.eatingPet();
      pet->eatTime();
      cout << endl << pet->getName() << " is full!" << endl << endl;
      cout << "Here are " << pet->getName() << "'s updated stats..." << endl << endl;
      cout << "Hunger Level: " << pet->getHunger() << endl << endl;
      cout << "Location: " << pet->getLocation() << endl << endl;
      cout << "Energy level: " << pet->getEnergy() << endl << endl;
      cout << "Enter any key to continue!" << endl << endl;
      string key;
      cin >> key;
    }
    if(o == 2){
      cout << endl << "-------------------------------------------------------------------------------------------------------------------------------------------------------------" << endl;
      cout << endl << "Playing with " << pet->getName() << " ..." << endl << endl;
      art.playingPet();
      pet->playTime();
      cout << endl << pet->getName() << " played catch!" << endl << endl;
      cout << "Here are " << pet->getName() << "'s updated stats..." << endl << endl;
      cout << "Hunger Level: " << pet->getHunger() << endl << endl;
      cout << "Location: " << pet->getLocation() << endl << endl;
      cout << "Energy Level: " << pet->getEnergy() << endl << endl;
      cout << "Enter any key to continue!" << endl << endl;
      string key;
      cin >> key;
    }
    if(o == 3){
      cout << endl << "-------------------------------------------------------------------------------------------------------------------------------------------------------------" << endl;
      cout << endl << "Putting " << pet->getName() << " to sleep..." << endl << endl;
      art.petSleeping();
      pet->sleepTime();
      cout << endl << pet->getName() << " is fully rested, but the pet is also feeling hungry since you burn calories while sleeping. Be sure to eat." << endl << endl;
      cout << "Here are " << pet->getName() << "'s updated stats..." << endl << endl;
      cout << "Hunger Level: " << pet->getHunger() << endl << endl;
      cout << "Location: " << pet->getLocation() << endl << endl;
      cout << "Energy level: " << pet->getEnergy() << endl << endl;
      cout << "Enter any key to continue!" << endl << endl;
      string key;
      cin >> key;
    }
    if(o == 4){
      cout << endl << "-------------------------------------------------------------------------------------------------------------------------------------------------------------" << endl;
      cout << endl << "Progressing " << pet->getName() << " to next hour..." << endl << endl;
      art.jumpingPet();
      nextHour(pet);
      cout << endl << "Next hour reached!" << endl << endl;
      cout << "Here are " << pet->getName() << "'s updated stats..." << endl << endl;
      cout << "Hunger Level: " << pet->getHunger() << endl << endl;
      cout << "Location: " << pet->getLocation() << endl << endl;
      cout << "Energy level: " << pet->getEnergy() << endl << endl;
      cout << "Enter any key to continue!" << endl << endl;
      string key;
      cin >> key;
    }
    if(o == 5){
      cout << endl << "-------------------------------------------------------------------------------------------------------------------------------------------------------------" << endl;
      cout << endl << "Cleaning" << pet->getName() << " to make Pet more attractive and less dirty..." << endl << endl;
      art.jumpingPet();
      nextHour(pet);
      cout << endl << "The Pet is groomed!" << endl << endl;
      cout << "Here are " << pet->getName() << "'s updated stats..." << endl << endl;
      cout << "Hunger Level: " << pet->getHunger() << endl << endl;
      cout << "Location: " << pet->getLocation() << endl << endl;
      cout << "Energy level: " << pet->getEnergy() << endl << endl;
      cout << "Enter any key to continue!" << endl << endl;
      string key;
      cin >> key;
    }
    if(pet->getHunger() > 50){
      cout << endl << "-------------------------------------------------------------------------------------------------------------------------------------------------------------" << endl;
      cout << endl << "STATUS REPORT:" << endl << endl;
      cout << pet->getName() << " is hungry, and needs to eat something really good today." << endl;
      cout << endl << "-------------------------------------------------------------------------------------------------------------------------------------------------------------" << endl;
    }
    if(pet->getClean() < 50){
      cout << endl << "-------------------------------------------------------------------------------------------------------------------------------------------------------------" << endl;
      cout << endl << "STATUS REPORT:" << endl << endl;
      cout << pet->getName() << " is dirty and needs to be cleaned!" << endl;
      cout << endl << "-------------------------------------------------------------------------------------------------------------------------------------------------------------" << endl;
    }
    if(pet->getEnergy() < 50){
      cout << endl << "-------------------------------------------------------------------------------------------------------------------------------------------------------------" << endl;
      cout << endl << "STATUS REPORT:" << endl << endl;
      cout << pet->getName() << " needs to recover. The Pet is not feeling energetic!" << endl;
      cout << endl << "-------------------------------------------------------------------------------------------------------------------------------------------------------------" << endl;
    }
    if(o == 6){
      cout << endl << "-------------------------------------------------------------------------------------------------------------------------------------------------------------" << endl;
      cout << endl << "Say goodbye to " << pet->getName() << ", saving progress..." << endl << endl;
      saveAnimal(pet);
      cout << "Save successfull!" << endl << endl;
      cout << "Here are " << pet->getName() << "'s saved stats..." << endl << endl;
      cout << "Hunger Level: " << pet->getHunger() << endl << endl;
      cout << "Location: " << pet->getLocation() << endl << endl;
      cout << "Energy level: " << pet->getEnergy() << endl << endl;
      Draw art;
      //art.drawEnd();
      cout << endl << "Enter any key to return to main menu!" << endl << endl;
      string key;
      cin >>  key;
      return false;
    }
    
  }
  
return true;
}





void ManagePets::nextHour(Pet* pet){
  pet->setEnergy(pet->getEnergy() - 25);
  pet->setClean(pet->getClean() - 25);
  pet->setHunger(pet->getHunger() + 25);
}

Pet* ManagePets::entirePetlist(){
  
  vector<Pet*> pets;
  vector <string> temp;
  
  ifstream fin;
  fin.open("GAMEFILE.TXT");
  if(!fin.is_open()) {
    cout << "File not found!" << endl;
  }

  string store;

  while(getline(fin, store)) {

    string variables;
    istringstream ins(store);

    while(ins >> variables) {
      temp.push_back(variables);
    }
    ins.clear();

    Pet* pet = new Pet();

    pet->setType(temp[0]);
    pet->setName(temp[1]);
    pet->setHunger(stoi(temp[2]));
    pet->setEnergy(stoi(temp[3]));
    pet->setClean(stoi(temp[4]));

    pets.push_back(pet);
    temp.clear();
    
  }
  vector<Pet*> whichPet;
  for(int i = 0; i < pets.size(); i++){
    whichPet.push_back(pets[i]);
  }

  for (int j = 0; j < pets.size(); j++) {
    cout << "Enter " << to_string(j+1) << " to select-" << endl << "Pet type: " << whichPet[j]->getType() << endl << "Pet name: " << whichPet[j]->getName() << endl << endl;
  }

  cout << "-------------------------------------------------------------------------------------------------------------------------------------------------------------" << endl << endl;

  if(pets.size() == 0){
    cout << endl << "No pets availabe, please create a new pet!" << endl << endl;
    exit(1);
  }
  int o;
  cin >> o;

  Pet* choice = whichPet[o-1];

  fin.close();

  return choice;
  
}



void ManagePets::saveAnimal(Pet* animal){

  vector<Pet*> pets;
  vector<string> temp;

  ifstream fin;
  fin.open("GAMEFILE.TXT");
  
  if(!fin.is_open()){
    cout << "File does not exist!" << endl;
  }

  string data;
  while(getline(fin, data)){
    istringstream ins(data);
    string variables;

    while(ins >> variables){
      temp.push_back(variables);
    }
    ins.clear();
    
    if(temp[1] != animal->getName()){
      Pet* pet = new Pet();
      pet->setType(temp[0]);
      pet->setName(temp[1]);
      pet->setHunger(stoi(temp[2]));
      pet->setEnergy(stoi(temp[3]));
      pet->setClean(stoi(temp[5]));
      pets.push_back(pet);
      temp.clear();
    }
  }

ofstream fout;
fout.open("GAMEFILE.TXT");
if(!fout.is_open()){
  cout << "File not found!" << endl;
}
  

string yourPet = animal->getType() + " " + animal->getName() + " " + to_string(animal->getHunger()) + " " + to_string(animal->getEnergy()) + " " + to_string(animal->getClean());

fout << yourPet << endl;

  for(int i = 0; i < pets.size(); i++){
    string yourPet = pets[i]->getType() + " " + pets[i]->getName() + " " + to_string(pets[i]->getHunger()) + " " + to_string(pets[i]->getEnergy()) + " " + to_string(pets[i]->getClean());
    fout << yourPet << endl;
  }
  
}

