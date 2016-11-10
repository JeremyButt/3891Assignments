/**
* @file      Course.cpp
* @brief     Definition of the Course methods.
*
* @author    Jeremy Butt
**/

#include <iostream>
#include <string>
#include <vector>
#include "Course.h"
#include "Student.h"
using namespace std;

	// Constructor for the Course Object
	Course::Course(unsigned int number, Level level, unsigned int capacity)
		: courseNumber(number),
		courseLevel(level),
		courseCapacity(capacity),
		courseEnrolement(0),
		courseSeatsRemaining(capacity)
	{
	}

	/**
	* Registers Student if the course isnt full. Then adds student to
	* enrolement and adds the student name to the class list.
	**/
	bool Course::registerStudent(Student s, bool overrideLimits){
		bool isEnroled = false;

		// if class isnt full or the override is in place, we will enrole the student.
		if ((courseSeatsRemaining > 0) or (overrideLimits == true)){
			isEnroled = true;
			classList_.push_back(s.Student::name()); // put student name into the vector for the class list.

			//Cout student name that has been inputed into the class list.
			cout << s.Student::name() << " has been REGISTERED for " << courseNumber << endl;

			//increment enrolment count and decreases the remaining seats.
			courseSeatsRemaining--;
			courseEnrolement++;
		}
		return isEnroled;
	}

	// Returns the capacity of the course.
	unsigned int Course::capacity() const{
		return courseCapacity;
	}

	// Returns the amount of people enroled in the class.
	unsigned int Course::enrolment() const{
		return courseEnrolement;
	}

	// Returns how many seats are remaining.
	int Course::seatsRemaining() const{
		return courseSeatsRemaining;
	}

	// Returns the classlist vector.
	std::vector<std::string> Course::classList() const{
		return classList_;
	}
