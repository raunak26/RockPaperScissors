//
// Created by Raunak Anand on 2019-04-20.
//

#include <iostream>
#include <string>
#include "rockpaperscissors.h"
#include "SwitchFunction.h"
#include "StringFunctions.h"

void rockpaperscissors(std::string& userInput, int num){ // combinations to see who will win and lose
  if(aiPlay(num) == "rock" && (userInput == "scissors" || userInput == "s" || userInput == "(s)cissors" || userInput == "(s)")){
    std::cout << "The ai played rock.\n";
    std::cout << "The AI wins :(" << std::endl;
  } if(aiPlay(num) == "rock" && (userInput == "paper" || userInput == "p" || userInput == "(p)aper" || userInput == "(p)")){
    std::cout << "The ai played rock.\n";
    std::cout << "You win!" << std::endl;
  } if(aiPlay(num) == "paper" && (userInput == "rock" || userInput == "r" || userInput == "(r)ock" || userInput == "(r)")){
    std::cout << "The ai played paper.\n";
    std::cout << "The AI wins :(" << std::endl;
  } if(aiPlay(num) == "paper" && (userInput == "scissors" || userInput == "s" || userInput == "(s)cissors" || userInput == "(s)")){
    std::cout << "The ai played paper.\n";
    std::cout << "You win!" << std::endl;
  } if(aiPlay(num) == "scissors" && (userInput == "paper" || userInput == "p" || userInput == "(p)aper")){
    std::cout << "The ai played scissors.\n";
    std::cout << "The AI wins :(" << std::endl;
  } if(aiPlay(num) == "scissors" && (userInput == "rock" || userInput == "r" || userInput == "(r)ock" || userInput == "(r)")) {
    std::cout << "The ai played scissors.\n";
    std::cout << "You win!" << std::endl;
  }
}


std::string userInput() { // function to ask user for rock/paper/scissors
  std::string input;
  std::cout << "Enter (R)ock, (P)aper, or (S)cissors for your move: ";
  getline(std::cin, input);
  for(char & i : input){
    i = tolower(i); // lowercase input
  }
  stripInPlace(input, " \t"); // remove whitespace
  while (input != "rock" && input != "paper" && input != "scissors" && input != "r" && input != "p" && input != "s" && input != "(r)ock" && input != "(p)aper" && input != "(s)cissors") {
    std::cout << "Enter (R)ock, (P)aper, or (S)cissors for your move: ";
    getline(std::cin, input);
    for (char & i : input){
      i = tolower(i); // lowercase input
    }
    stripInPlace(input, " \t"); // remove whitespace
  }
  return input;
}


