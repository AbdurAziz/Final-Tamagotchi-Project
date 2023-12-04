#include <iostream>
#include <fstream>
#include "Draw.h"
#include "ManagePets.h"
#include <string>
#include <cctype>
using namespace std;

int main() {

  ManagePets func;
  
  bool game = true;
  
  while(game){
    func.MainMenu();
  }

  return 0;
  
}