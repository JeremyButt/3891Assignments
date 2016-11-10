/*!
 * @file      Carriage.cpp
 * @brief     Definition of the Carriage class.
 *
 * @author    Jeremy Butt <jeremybutt@mun.ca>
 */

 #include <iostream>
 #include <vector>
 #include "Carriage.h"
 #include "Pumpkin.h"
 #include "date.h"
 using namespace std;

//Constructor for Carriages.
Carriage::Carriage(Pumpkin::Colour colour)
: colour_(colour), dateCreated_(currentDate())
{
}

// Accessor method for the Carriages Colour.
Pumpkin::Colour Carriage::colour() const{
  return colour_;
}

//Turns Carriage into a pumpkin if the date has changed.
Pumpkin* Carriage::change() const{
  if (this->dateCreated_ != currentDate()){
    Pumpkin* p = Pumpkin::Create(this->colour_);
    return p;
  }else{
    return nullptr; //Returns null pointer if the time hasnt changed
  }
}
