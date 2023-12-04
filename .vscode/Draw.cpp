#include <iostream>
using namespace std;

#include <string>
#include <iostream>

#include "Draw.h"

using namespace std;

Draw::Draw() {

}

void drawCheetah() {
    cout << "   ,-----," << endl;
    cout << "  ( o   o )" << endl;
    cout << "  /       \\" << endl;
    cout << " |         |______" << endl;
    cout << " |                |\\_____/)" << endl;
    cout << " |                | |  @__@" << endl;
    cout << "  \\              /(__" << endl;
    cout << "    \\__________/" << endl;
}

void drawDragon() {
    std::cout << "      \\            /" << std::endl;
    std::cout << "        \\        /" << std::endl;
    std::cout << "          .--." << std::endl;
    std::cout << "         |o_o |" << std::endl;
    std::cout << "         |:_/ |" << std::endl;
    std::cout << "        //   \\ \\" << std::endl;
    std::cout << "       (|     | )" << std::endl;
    std::cout << "      /'\\_   _/`\\" << std::endl;
    std::cout << "      \\___)=(___/" << std::endl;
}

void drawPanda() {
    std::cout << "   /\\_/\\ " << std::endl;
    std::cout << "  ( o.o )" << std::endl;
    std::cout << "   > ^ < " << std::endl;
    std::cout << "   /  |  \\" << std::endl;
    std::cout << "  /   |   \\" << std::endl;
    std::cout << " (    |    )" << std::endl;
    std::cout << "  \\ \\ | / /" << std::endl;
}

void jumpingPet(){
    std::cout << "  ^_^   \n";
    std::cout << " /|_|\\  \n";
    std::cout << "  | |   \n";
    std::cout << " /   \\  \n";
}

void playingPet(){  // pet has a playful stance
    std::cout << "   /\\_/\\   \n";
    std::cout << "  ( o.o )  \n";
    std::cout << "  > ^ <    \n";
    std::cout << " /  |  \\   \n";
    std::cout << "(__/ \\__\\  \n";

}

void eatingPet(){
    std::cout << "   /\\_/\\   \n";
    std::cout << "  ( o.o )  \n";
    std::cout << "  > ^ <    \n";
    std::cout << " /  |  \\   \n";
    std::cout << "(__/ \\__\\  \n";
    std::cout << "   Nom nom \n";
}

void petSleeping(){
    std::cout << "    /\\_/\\    \n";
    std::cout << "   ( -.- )   \n";
    std::cout << "  c(     o   \n";
    std::cout << "   |     |   \n";
    std::cout << "  (_/---\\_)  \n";
    std::cout << "   Z   Z Z   \n";
}

void petGrooming(){
    std::cout << "    /\\_/\\    \n";
    std::cout << "   ( o o )   \n";
    std::cout << "   /  ^  \\   \n";
    std::cout << "  |  \\_/  |  \n";
    std::cout << "  (_/   \\_)  \n";
    std::cout << "    Groomed! \n";

}