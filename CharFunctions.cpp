//
// Created by Raunak Anand on 2019-04-19.
//
#include "CharFunctions.h"

// code by professor Matthew Butner done in lecture


bool isupper(char c) {
  return c >= 'A' && c <= 'Z';
}

bool islower(char c) {
  return c >= 'a' && c <= 'z';
}

bool isalpha(char c) {
  return islower(c) || isupper(c);
}

bool isdigit(char c) {
  return c >= '0' && c <= '9';
}

//bool isalnum(char c) {
//  return isalnum(c) || isdigit(c);
//}

char tolower(char c) {
  if(isupper(c)){
    return 'a' + c - 'A';
  } else{
    return c;
  }
}


