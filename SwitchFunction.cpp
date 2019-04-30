//
// Created by Raunak Anand on 2019-04-20.
//

#include "SwitchFunction.h"

#include <string>


std::string aiPlay(int getNumber) { // this function switches number with a string depending on the case
  std::string gamePlay;

  switch(getNumber){
    case 0: // for eg. if randomNumber is 0, it'll be replaced with rock
      gamePlay = "rock";
      break;
    case 1:
      gamePlay = "paper";
      break;
    case 2:
      gamePlay = "scissors";
      break;
    default:
      gamePlay = "Invalid";
      break;

  }
  return gamePlay;
}



