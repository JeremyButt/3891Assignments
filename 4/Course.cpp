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
	* Insertion operator to insert students into the course.
	* Errors will occur if student is already registered or if the class is full.
	**/
	Course& Course::operator << (Student s){



		if ((courseSeatsRemaining > 0)){

			// goes through studentList_ to see if there is anyone the same registered.
			for(Student stu : studentList_){
				if (stu == s){
					throw string("Student is already registered.");  // Throws error back if they are already registered.
					return *this;
				}
			}

			registerStudent(s);
			return *this;
		}else{

			// goes through studentList_ to see if there is anyone the same registered.
			for(Student stu : studentList_){
				if (stu == s){
					throw string("Student is already registered and the course is full.");  // Throws error back if they are already registered.
					return *this;
				}
			}

			throw string("the course is full.");
			return *this;
		}


	}

	/**
	* Registers Student if the course isnt full. Then adds student to
	* enrolement and adds the student name to the class list and adds student object to a vector.
	**/
	bool Course::registerStudent(Student s, bool overrideLimits){
		bool isEnroled = false;

		// couts message to show student is Attempting to be registered
		cout << "Attempting to register " << s.name() << " for " << courseNumber << endl;

		// if class isnt full or the override is in place, we try to enrole the student.
		if ((courseSeatsRemaining > 0) or (overrideLimits == true)){

			isEnroled = true;
			classList_.push_back(s.Student::name()); // put student name into the vector for the class list.
			studentList_.push_back(s); // inserts student object into vector

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

	// Returns the course level.
	Course::Level Course::level() const{
		return courseLevel;
	}

	// Returns the number.
	unsigned int Course::Number() const{
		return courseNumber;
	}

	// Returns the amount of people enroled in the class.
	unsigned int Course::enrolment() const{
		return courseEnrolement;
	}

	// Returns how many seats are remaining.
	int Course::seatsRemaining() const{
		return courseSeatsRemaining;
	}

	int Course::studentsRegistered () const{
		return numStudentsRegistered;
	}

	// Returns the classlist vector.
	std::vector<std::string> Course::classList() const{
		return classList_;
	}
