#include <iostream>
#include <string>
#include "Course.h"
using namespace std;

	// Constructor for the Course Object
	Course::Course(unsigned int number, Level level, unsigned int capacity)
		: classNumber(number),
		classLevel(level),
		classCapacity(capacity),
		classEnrolement(0),
		classSeatsRemaining(capacity)
	{
	}
	
	// Registers Student if the course isnt full. Then adds student to the class enrolment.
	bool Course::registerStudent(bool overrideLimits){
		bool isEnroled = false;
		
		if ((classSeatsRemaining > 0) or (overrideLimits == true)){
			isEnroled = true;
			cout << "Enroled!" << endl;
			classSeatsRemaining--;
			classEnrolement++;
		}
		return isEnroled;
	}
	
	// Returns the capacity of the course.
	unsigned int Course::capacity() const{
		return classCapacity;
	}

	// Returns the amount of people enroled in the class.
	unsigned int Course::enrolment() const{
		return classEnrolement;
	}

	// Returns how many seats are remaining.
	int Course::seatsRemaining() const{
		return classSeatsRemaining;
	}

	
	
	

