#include "utility.h"

//implement ctors
Utility::Utility(){}

//implement methods

bool Utility::isNumber(std::string instr){
  
  if (instr.empty())
  {
     return false;
  }
  if((instr[0] == '+' || instr[0] == '0') && instr.size() > 5 ){
    return true;
  }
  else{
    return false;
  }
}

bool Utility::isInteger(std::string instr){

  if (instr.empty())
  {
     return false;
  }
  int tmp = std::stoi(instr);
  if(tmp > -2147483647 && tmp <2147483647){
    return true;
  }
  else{
    return false;
  }
}

bool Utility::isFloat(std::string instr){

  if (instr.empty())
  {
     return false;
  }
  float tmp = std::stof(instr);
  if(tmp > -2147483647 && tmp <2147483647){
    return true;
  }
  else{
    return false;
  }
}

bool Utility::isBoolean(std::string instr){
  if (instr.empty())
  {
     return false;
  }
  if(instr=="True" || instr=="TRUE" || instr=="true"){
    return true;
  }
  else {
    return false;
  }
}

bool Utility::isEmail(std::string instr){
  if (instr.empty())
  {
     return false;
  }
  int count{};
  for(int i=0;i<instr.size();i++){
    count++;
    if(instr[i] == '@'){
      if(count<=1){return false;}
      count = 0;
    }
    if(instr[i] == '.'){
      if(count <= 1){return false;}
      count=0;
    }
  }
  return true;
}

bool Utility::isURL(std::string instr){
  const std::regex pattern("((http|https)://)(www.)?[a-zA-Z0-9@:%._\\+~#?&//=]{2,256}\\.[a-z]{2,6}\\b([-a-zA-Z0-9@:%._\\+~#?&//=]*)");
 if (instr.empty())
  {
     return false;
  }
  if(regex_match(instr, pattern))
  {
    return true;
  }
  else
  {
    return false;
  }
}
