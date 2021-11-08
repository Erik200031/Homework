#ifndef UTILITY_H_
#define UTILITY_H_
#include <iostream>
#include <string>
#include <regex>

class Utility{
public:
  Utility();
  ~Utility(){}
public:
 static bool isNumber(std::string);
 static bool isInteger(std::string);
 static bool isFloat(std::string);
 static bool isBoolean(std::string);
 static bool isEmail(std::string);
 static bool isURL(std::string);
};

#endif //UTILITY_H_
