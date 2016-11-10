
/**
* @file      Student.cpp
* @brief     Definition of the Student methods.
*
* @author    Jeremy Butt
**/

#include <iostream>
#include "Student.h"
using namespace std;

// Constructor for a student.
Student::Student(ID id, std::string name, Level level)
: id_(id),
name_(name),
level_(level)
{
}

//Equality operators (Checks to see if the ids of the two students match or not.)
bool Student::operator == (const Student& s) const{
  if (id_.year == s.id_.year && id_.serial == s.id_.serial){
    return true;
  }
  return false;
}
bool Student::operator != (const Student& s) const{
  if (id_.year != s.id_.year || id_.serial != s.id_.serial){
    return true;
  }
  return false;
}

// Returns the students id number.
Student::ID Student::id() const{
  return id_;
}

// Returns the students name.
string Student::name() const{
  return name_;
}

// Returns students level.
Student::Level Student::level() const{
  return level_;
}
