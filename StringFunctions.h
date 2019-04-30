//
// Created by Raunak Anand on 2019-04-19.
//

#ifndef ROCKPAPERSCISSORS__CHARACTERFUNCTIONS_H_
#define ROCKPAPERSCISSORS__CHARACTERFUNCTIONS_H_

#include <string>
// code by professor Matthew Butner done in lecture


void lowerInPlace(std::string& string);
std::string lower(std::string string);
void stripInPlace(std::string& string, const std::string& charsToRemove = "\t\n ");
void lstripInPlace(std::string& string, const std::string& charsToRemove = "\t\n ");
void rstripInPlace(std::string& string, const std::string& charsToRemove = "\t\n ");
bool contains(const std::string& string, char letter);


#endif //ROCKPAPERSCISSORS__CHARACTERFUNCTIONS_H_
