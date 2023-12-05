#include "Draw.h"
#include <iostream>
using namespace std;


Draw::Draw() {

}

void Draw::showtheMenu(){
  cout << endl <<  "Enter 1 to create new pet!" << endl << endl;
  cout << "Enter 2 to load a saved pet!" << endl << endl;
  cout << "Enter 3 to quit!" << endl << endl;
  cout << "Enter 4 to read the tutorial menu!" << endl << endl;
}

void Draw::infoAboutGame(){
  cout << "Welcome to this alright Tamagotchi Pet Game" << endl << endl;
  cout << "In this game, you will be able to select a type of Pet, name it, and also change its values."<< endl << endl;
  cout << "You can change its hunger level, energy level, sleep level, mood level, etc." << endl << endl;
  cout << "These variables decrease when you go to the next hour. So please choose wisely, and treat your Pet well." << endl << endl;
  cout << "Enter any key to return to menu!" << endl << endl;
}

void Draw:: drawCheetah() {
    cout << "   ,-----," << endl;
    cout << "  ( o   o )" << endl;
    cout << "  /       \\" << endl;
    cout << " |         |______" << endl;
    cout << " |                |\\_____/)" << endl;
    cout << " |                | |  @__@" << endl;
    cout << "  \\              /(__" << endl;
    cout << "    \\__________/" << endl;
}

void Draw::drawDragon() {
    std::cout << "      \\            / " << std::endl;
    std::cout << "        \\        /" << std::endl;
    std::cout << "          .--." << std::endl;
    std::cout << "         |o_o |" << std::endl;
    std::cout << "         |:_/ |" << std::endl;
    std::cout << "        //   \\ \\" << std::endl;
    std::cout << "       (|     | )" << std::endl;
    std::cout << "      /'\\_   _/`\\ " << std::endl;
    std::cout << "      \\___)=(___/ " << std::endl;
}

void Draw:: drawPanda() {
    std::cout << "   /\\_/\\ " << std::endl;
    std::cout << "  ( o.o )" << std::endl;
    std::cout << "   > ^ < " << std::endl;
    std::cout << "   /  |  \\" << std::endl;
    std::cout << "  /   |   \\" << std::endl;
    std::cout << " (    |    )" << std::endl;
    std::cout << "  \\ \\ | / /" << std::endl;
}

void Draw::jumpingPet(){
    std::cout << "  ^_^   \n";
    std::cout << " /|_|\\  \n";
    std::cout << "  | |   \n";
    std::cout << " /   \\  \n";
}

void Draw::playingPet(){  // pet has a playful stance
    std::cout << "   /\\_/\\   \n";
    std::cout << "  ( o.o )  \n";
    std::cout << "  > ^ <    \n";
    std::cout << " /  |  \\   \n";
    std::cout << "(__/ \\__\\  \n";

}
void Draw::eatingPet(){
    std::cout << "   /\\_/\\   \n";
    std::cout << "  ( o.o )  \n";
    std::cout << "  > ^ <    \n";
    std::cout << " /  |  \\   \n";
    std::cout << "(__/ \\__\\  \n";
    std::cout << "   Nom nom \n";
}

void Draw::petSleeping(){
    std::cout << "    /\\_/\\    \n";
    std::cout << "   ( -.- )   \n";
    std::cout << "  c(     o   \n";
    std::cout << "   |     |   \n";
    std::cout << "  (_/---\\_)  \n";
    std::cout << "   Z   Z Z   \n";
}

void Draw::petGrooming(){
    std::cout << "    /\\_/\\    \n";
    std::cout << "   ( o o )   \n";
    std::cout << "   /  ^  \\   \n";
    std::cout << "  |  \\_/  |  \n";
    std::cout << "  (_/   \\_)  \n";
    std::cout << "    Groomed! \n";

}
