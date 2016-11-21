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
{
  lhs_ = move(lhs);
  rhs_ = move(rhs);
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
