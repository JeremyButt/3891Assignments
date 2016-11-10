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

  // construct students
  Student Jeremy(201527710, "Jeremy Butt", Student::Level::Undergraduate);
  Student Test1(100000000, "test1", Student::Level::Undergraduate);
  Student Test2(200000000, "test2", Student::Level::Postgraduate);

  // construct course
  Course Engi3891(3891, Course::Level::Undergraduate, 2);

  // reg students for class.
  Engi3891.registerStudent(Jeremy);
  Engi3891.registerStudent(Test1);
  Engi3891.registerStudent(Test2, true);


  // prints out class list for the course.
  cout << "______________________" << endl;
  cout << "class List            " << endl;

  for (int i=0; i < Engi3891.classList().size();i++){
    cout << " " << (i+1) << ". " << Engi3891.classList().at(i)	<< endl;
  }

  cout << "______________________" << endl;

  cout << Engi3891.seatsRemaining() << endl << Engi3891.capacity() << endl;

  // Marks end of the program.
  cout << "complete" << endl;



  return 0;
}
