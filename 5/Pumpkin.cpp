/*!
 * @file      Pumpkin.cpp
 * @brief     Definition of the Pumpkin class.
 *
 * @author    Jeremy Butt <jeremybutt@mun.ca>
 */
#include <iostream>
#include <vector>
#include "Pumpkin.h"
using namespace std;

//Pumpkin Exception Constructor for exception and error handling.
PumpkinException::PumpkinException(std::string message)
: message_(message)
{
}

//Accessor method to get access to the message of the PumpkinException.
std::string PumpkinException::message() const {
  return message_;
}

//Method to create a new pumpkin.
Pumpkin* Pumpkin::Create(Colour c)
{
  static Pumpkin* p = new Pumpkin();
  //Fills pumpkin variables accordingly
  p->colour_ = c;
  p->carved_ = false;
  p->light_ = false;
  return p;
}


//Creates a group(vector) of pumpkins.
std::vector<Pumpkin> Pumpkin::CreatePumpkins(unsigned int n, Colour c, bool carved){
  std::vector<Pumpkin> pumpkinList_;
  for (int i = 0; i < n; i++){
    static Pumpkin* p;
    p = new Pumpkin();
    p->colour_ = c;
    p->light_ = false;
    if (carved == true){
      p->carve();
    }
    pumpkinList_.push_back(*p);
    delete p;
  }
  return pumpkinList_;
}

//Accessor method to see if the pumpkin is carved or not.
bool Pumpkin::carved() const{
  return carved_;
}

//Method to carve pumpkin.
void Pumpkin::carve(){
  if(this->carved_ == true){
    throw PumpkinException("This Pumpkin is already carved.");
  }else{
  carved_ = true;
  }
  }

//Accessor method to see if the pumpkin/jack-o-lantern is lit up.
bool Pumpkin::alight() const{
  return light_;
}

//Method to light up a pumpkin as long as it is carved and not already lit.
void Pumpkin::light(){
  if (this->carved_ == false){
    throw PumpkinException("Pumpkin not carved");
  }
  else if (this->light_ == true){
    throw PumpkinException("This pumpkin is already lit up.");
  }else{
  light_ = true;
  }
}

//Accessor method to see the pumpkins colour.
Pumpkin::Colour Pumpkin::colour() const{
  return colour_;
}
