/**
* @file      Test.cpp
* @brief     Creates Students and Course then registers Students for Course.
*
* @author    Jeremy Butt
**/

#include <iostream>
#include "Student.h"
#include "Course.h"
using namespace std;


int main(){

  // Creates struct for some student ids
  Student::ID jgb537 = {2015, 27710};
  Student::ID jgb538 = {2015, 27711};

  // Creates some students
  Student Jeremy(jgb537, "Jeremy Butt", Student::Level::Undergraduate);
  Student test(jgb538, "test", Student::Level::Undergraduate);

  // Creates a course
  Course Engi3891(3891, Course::Level::Undergraduate, 3);

  // Registers students into course using Insertion operator.
  try {Engi3891 << Jeremy;}
  catch(string& message){
    cout << message << endl;
  }
  try{Engi3891 << test;}
  catch(string& message){
    cout << message << endl;
  }
  try{Engi3891 << Jeremy;}
  catch(string& message){
    cout << message << endl;
  }

  // Prints out class list for the course.
  cout << "______________________" << endl;
  cout << "class List            " << endl;

  for (int i=0; i < Engi3891.classList().size();i++){
    cout << " " << (i+1) << ". " << Engi3891.classList().at(i)	<< endl;
  }

  cout << "______________________" << endl;


  // Marks end of the program.
  cout << "complete" << endl;


  return 0;
}
