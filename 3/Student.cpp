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
Student::Student(unsigned int id, std::string name, Level level)
: id_(id),
name_(name),
level_(level)
{
}

// Returns the students id number.
unsigned int Student::id() const{
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
