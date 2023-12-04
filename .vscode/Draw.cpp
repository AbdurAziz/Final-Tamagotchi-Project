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