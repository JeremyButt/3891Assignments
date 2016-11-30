#include "Expression.h"
#include <iostream>
#include <string>
#include <memory>

using namespace std;
using namespace calc;

//Base evaluate method.
double Expression::evaluate() const{
  double x = this->value_;
  return x;
}

ExpPtr Expression::Parse(string s){
	// find number within the string and then convert to a double and the convert to an ExpPtr.
	string lhsStr = FindNumber(s);
	double LHS = stof(lhsStr);
  ExpPtr lhs = Literal(LHS);

	// Find where the operator is located within the string
  // Find if there is an operator
	size_t opPosition = lhsStr.length();
	if (opPosition == s.length())
	{
		throw string("'" + s + "' contains no operator");
	}
  // Find the operator Position when there is whitespace around it.
	while (opPosition < s.length() and s[opPosition] == ' ')
	{
		opPosition++;
	}

  // Record what character (ie. the operator) is at the operator position.
	char op = s[opPosition];
  // Check to see if the operator is supported by the parsing code.
	if (op != '+' && op != '*')
	{
		throw string("unsupported operator: " + string(1, op));
	}

	// Continue on to find the next number after the operator.
	size_t resetStart = opPosition + 1;
	while (resetStart < s.length() and s[resetStart] == ' ')
	{
		resetStart++;
	}

	// remove the part of the string that has been properly parsed.
	const string restofString = s.substr(resetStart);
	string next = FindNumber(restofString);

  // Check to see if the rest of the string is only a number or if it is more operations.
	if (next.length() == restofString.length())
	{
		// The entire sting next is the number number. (most cases)
		double RHS = stof(restofString);
    ExpPtr rhs = Literal(RHS);

    if (op == '+'){
		    return BinaryOperation::Add(move(lhs), move(rhs));
    }
    if (op == '*'){
        return BinaryOperation::Multiply(move(lhs), move(rhs));
    }
	}

	// If the rest of the string is more operators we have to start parsing again.
	ExpPtr rhs = Parse(restofString);
}


bool Expression::IsNumber(char x)
{
  // Check to see if the character is within the numerical characters.
	return (x <= '9' && x >= '0');
}

string Expression::FindNumber(const string& s)
{
  // see if the string is empty or if it does not start with a number.
	if (s.empty())
	{
		throw string("'" + s + "' is empty");
	}

	// Find the first character that is not part of a number:
	for (size_t i = 0; i < s.length(); i++)
	{
    // See if there is a number or a decimal at the point.
		const bool ISnumber = IsNumber(s[i]);
		const bool ISdecimal = (s[i] == '.');
		const bool ISwhitespace = (s[i] == ' ');
    // if not return string with removed whitespace/invalid characters.
		if (!ISnumber && !ISdecimal && !ISwhitespace)
		{
			return s.substr(0, i);
		}
	}

	// No non-number characters found: the whole thing must be a number.
	return s;
}


//Literal: takes a double creates a literal pointer then converts to a ExpPtr
ExpPtr Expression::Literal(double x){
  Literal_ *L = new Literal_(x);
  L->value_ = x;
  ExpPtr E (L);
  return E;
}

//Takes 2 ExpPtrs and creates an Addition object to store the operation(both left and right hand side)
ExpPtr BinaryOperation::Add(ExpPtr lhs, ExpPtr rhs){
  Addition *add = new Addition(move(lhs), move(rhs));
  ExpPtr E (add);
  return E;
}

//Takes 2 ExpPtrs and creates an Subtraction object to store the operation(both left and right hand side)
ExpPtr BinaryOperation::Subtract(ExpPtr lhs, ExpPtr rhs){
  Subtraction *sub = new Subtraction(move(lhs), move(rhs));
  ExpPtr E (sub);
  return E;
}

//Takes 2 ExpPtrs and creates an Multiplication object to store the operation(both left and right hand side)
ExpPtr BinaryOperation::Multiply(ExpPtr lhs, ExpPtr rhs){
  Multiplication *mult = new Multiplication(move(lhs), move(rhs));
  ExpPtr E (mult);
  return E;
}

//Takes 2 ExpPtrs and creates an Division object to store the operation(both left and right hand side)
ExpPtr BinaryOperation::Divide(ExpPtr lhs, ExpPtr rhs){
  Division *divi = new Division(move(lhs), move(rhs));
  ExpPtr E (divi);
  return E;
}

//Construtor - puts ExpPtrs into the BinaryOperation object
BinaryOperation::BinaryOperation(ExpPtr lhs, ExpPtr rhs)
: lhs_(move(lhs)), rhs_(move(rhs))
{
}

//Construtor - puts ExpPtrs into the Addition object using the BinaryOperation Construtor
Addition::Addition(ExpPtr lhs, ExpPtr rhs)
: BinaryOperation(move(lhs), move(rhs))
{
}

//evaluates an addition object.
double Addition::evaluate()const{
  double x = this->rhs_->evaluate();
  double y = this->lhs_->evaluate();
  double z = x + y;
  return z;
}

//Construtor - puts ExpPtrs into the Subtraction object using the BinaryOperation Construtor
Subtraction::Subtraction(ExpPtr lhs, ExpPtr rhs)
: BinaryOperation(move(lhs), move(rhs))
{
}

//evaluates a subtraction object.
double Subtraction::evaluate()const{
  double x = this->rhs_->evaluate();
  double y = this->lhs_->evaluate();
  double z = y - x;
  return z;
}

//Construtor - puts ExpPtrs into the Multiplication object using the BinaryOperation Construtor
Multiplication::Multiplication(ExpPtr lhs, ExpPtr rhs)
: BinaryOperation(move(lhs), move(rhs))
{
}

//evaluates a Multiplication object.
double Multiplication::evaluate()const{
  double x = this->rhs_->evaluate();
  double y = this->lhs_->evaluate();
  double z = x * y;
  return z;
}

//Construtor - puts ExpPtrs into the Division object using the BinaryOperation Construtor
Division::Division(ExpPtr lhs, ExpPtr rhs)
: BinaryOperation(move(lhs), move(rhs))
{
}

//evaluates a Division object.
double Division::evaluate()const{
  double x = this->rhs_->evaluate();
  double y = this->lhs_->evaluate();
  double z = y / x;
  return z;
}

//evaluates a Literal object.
double Literal_::evaluate()const{
  return this->value_;
}

//Construtor for the literal object
Literal_::Literal_(double x)
:x_(x)
{
}
