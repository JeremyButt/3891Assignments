#include "Expression.h"
#include <math.h>
#include <limits>
#include <memory>
#include <iostream>

using namespace std;
using namespace calc;
/*******************************************
*This Test code brought to you by the King.
*
*Use at your own risk.
********************************************/

int main(){

int x=0;
try{

ExpPtr test = Expression::Parse("5 +1.5");


double y= test->evaluate();
if(y == (5+1.5)){
	cout<<"Success 1"<<endl;
	x++;
	}

string a= "5 + 1.5";
ExpPtr test2 = Expression::Parse(a);
if(test2->evaluate()==(6.5)){
	cout<<"Success 2"<<endl;
	x++;
	}

if((Expression::Parse("2.5 +12  + 69"))->evaluate() == (2.5+12+69)){
	cout<< "Success 3"<<endl;
	x++;
	}
if((Expression::Parse("2.5 +12  - 69"))->evaluate() == (2.5+12-69)){
	cout<< "Success 4"<<endl;
	x++;
	}

if((Expression::Parse("6*5+  3"))->evaluate() == (6*5+3)){
	cout<< "Success 5"<<endl;
	x++;
	}

if((Expression::Parse(" 10    *2+4"))->evaluate() == (10*2+4)){
	cout<< "Success 6"<<endl;
	x++;
	}
if((Expression::Parse("400 - 30 +0"))->evaluate() == (400-30+0)){
	cout<< "Success 7"<<endl;
	x++;
	}

if((Expression::Parse("1337          +          9"))->evaluate() == (1337+9)){
	cout<< "Success 8"<<endl;
	x++;
	}

if((Expression::Parse("7 - 7"))->evaluate() == (0)){
	cout<< "Success 9"<<endl;
	x++;
	}

if((Expression::Parse("3* 3"))->evaluate() == (3*3)){
	cout<< "Success 10"<<endl;
	x++;
	}
		
cout<<"Passed "<<x<<"/10 tests."<<endl;
}
catch(...){
cout<<"Main caught exceptions thrown by your code."<<endl;
cout<<"Passed "<<x<<"/10 tests. You may have been able to pass more of the tests, but your code crashed."<<endl;

}

}
