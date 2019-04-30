#include <iostream>
#include <string>
#include <random>
#include <ctime>
#include "StringFunctions.h"
#include "SwitchFunction.h"
#include "rockpaperscissors.h"


int main(int argc, char** argv) {
  int val = std::stoi(argv[1]); // converting input to integers
  std::minstd_rand rng(val); // declaration random number generator
  bool RockPaperScissors = true; // creation of boolean to create endless loop
                                 // CSIF



  while(RockPaperScissors == true){
    std::string input = userInput(); // program asks user for input until the user gives acceptable input
    int randomNumber;
    std::uniform_int_distribution<> int_dis(0,2); // initializing random number generator across range of (0,2)
    randomNumber = int_dis(rng);

    if((aiPlay(randomNumber) == "rock" && (input == "rock" || input == "r" || input == "(r)ock" || input == "(r)")) || (aiPlay(randomNumber) == "paper" && (input == "paper" || input == "p" || input == "(p)aper" || input == "(p)")) || (aiPlay(randomNumber) == "scissors" && (input == "scissors" || input == "s" || input == "(s)cissors" || input == "(s)")) ){
      std::cout << "The ai played " << aiPlay(randomNumber) << "." << std::endl;
      std::cout << "You and the AI both played " << aiPlay(randomNumber) << "." << std::endl;
      std::cout << "Keep playing until someone wins." << std::endl;
      continue; // if the user and the program tie then the game will keep playing until there's a winner
    }
    else {
      bool gameContinuation = true; // endless loop

      while(gameContinuation == true){ // program asks whether the user wants to continue playing or no
                                       // until the user gives an acceptable input
        rockpaperscissors(input, randomNumber);
        std::string answer;
        std::cout << "Would you like to replay the game?\n";
        std::cout << "Enter (Y)es or (N)o: ";
        getline(std::cin, answer);
        for (char & i : answer) {
          i = tolower(i);
        }
        stripInPlace(answer, " \t ");
        while (answer != "yes" && answer != "no" && answer != "y" && answer != "n" && answer != "(n)o" && answer != "(y)es"){
          std::cout << "Would you like to replay the game?\n";
          std::cout << "Enter (Y)es or (N)o: ";
          getline(std::cin, answer);
          for (char & i : answer){
            i = tolower(i);
          }
          stripInPlace(answer, " \t "); // remove whitespace
        }
        if(answer == "y" || answer == "yes" || answer == "(y)es"){ // if user inputs yes then the game will startover
                                                                  // by breaking out of the nearest while loop
          break;
        } else{
          exit(0); // else it'll end entirely
        }

      }
    }
  }
}
