#include <iostream>
#include <string>
#include "Course.h"
using namespace std;

int main(int argc, char *argv[]){
	
	Course Programming(3891, Course::Level::Undergraduate, 10);
	
	cout << Programming.enrolment() << endl;
	cout << Programming.capacity() << endl;
	cout << Programming.seatsRemaining() << endl;

	for(int i=0;i<100;i++){
	Programming.registerStudent(true);
	}

	cout << Programming.enrolment() << endl;
	
	cout << Programming.capacity() << endl;
	cout << Programming.seatsRemaining() << endl;
		
	return 0;
}
