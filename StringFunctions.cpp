//
// Created by Raunak Anand on 2019-04-19.
//

#include <algorithm>
#include <string>
#include "StringFunctions.h"

// code by professor Matthew Butner done in lecture


void lowerInPlace(std::string& string) {
  for(auto& letter : string){
    letter = tolower(letter);
  }
}
std::string lower( std::string string) {
  lowerInPlace(string);
  return string;
}
void stripInPlace(std::string &string, const std::string& charsToRemove) {
  lstripInPlace(string, charsToRemove);
  rstripInPlace(string, charsToRemove);

}
void lstripInPlace(std::string &string, const std::string& charsToRemove) {
  auto itr = string.begin();
  for(; itr != string.end(); ++itr){
    if(!contains(charsToRemove, *itr)){
      break;
    }
  }
  string.erase(string.begin(), itr);
}
void rstripInPlace(std::string &string, const std::string& charsToRemove) {
  auto itr = string.rbegin();
  for(; itr != string.rend(); ++itr){
    if(!contains(charsToRemove, *itr)){
      break;
    }
  }
  string.erase(itr.base(), string.cend());
}
bool contains(const std::string &string, char letter) {
  return std::find(string.cbegin(), string.cend(), letter) != string.cend();
}


