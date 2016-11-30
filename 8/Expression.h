/*!
 * @file      Expression.h
 * @brief     Declaration of the calc::Expression class.
 *
 * @author    Jonathan Anderson <jonathan.anderson@mun.ca>
 * @copyright (c) 2016 Jonathan Anderson. All rights reserved.
 * @license   Apache License, Version 2.0
 *
 * Licensed under the Apache License, Version 2.0 (the "License"); you may not
 * use this file except in compliance with the License.  You may obtain a copy
 * of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS, WITHOUT
 * WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied. See the
 * License for the specific language governing permissions and limitations
 * under the License.
 */

#if !defined(EXPRESSION_H)
#define EXPRESSION_H

#include <memory>

using namespace std;

namespace calc {

class Expression;
typedef std::unique_ptr<Expression> ExpPtr;

//! A mathematical operation.
class Expression
{
public:
	//! Evaluate this operation (reduce to a single value).
	virtual double evaluate() const = 0;

	/**
	 * Parse a string containing literals and, optionally,
	 * arithmetic operations.
	 *
	 * In order to avoid the complexity of dealing with the order of
	 * operations, this method will only have to deal with either
	 * addition or multiplication  in the same expression.
	 *
	 * @returns   an `ExpPtr` representing the expression
	 *            (e.g., `"1 + 2 + 3"` becomes Add { 1, Add { 2, 3 } })
	 */
	static ExpPtr Parse(std::string);

	// Function to find number in a string
	static string FindNumber(const string& s);

	// Function to check if the character is withing the numerical characters.
	static bool IsNumber(char c);

	//! Construct the simplest expression: a literal value.
	static ExpPtr Literal(double);

	//Store the elvaluated value of an expression
	double value_;
};



//! An operation on two operands, which are themselves expressions.
class BinaryOperation : public Expression
{
public:
	//! Construct an operation that will add two expressions together.
	static ExpPtr Add(ExpPtr lhs, ExpPtr rhs);

	//! Construct an operation to subtract two expressions.
	static ExpPtr Subtract(ExpPtr lhs, ExpPtr rhs);

	//! Construct an operation to multiply two expressions.
	static ExpPtr Multiply(ExpPtr lhs, ExpPtr rhs);

	//! Construct an operation to divide two expressions.
	static ExpPtr Divide(ExpPtr lhs, ExpPtr rhs);

protected:
	//! Constructor: must be implemented, should not be modified.
	BinaryOperation(ExpPtr lhs, ExpPtr rhs);

	//Fields of ExpPtr to store both the left hand side and ride hand side of the operation.
	const ExpPtr lhs_;
	const ExpPtr rhs_;

};

// Class to store Addition operation objects
class Addition : public BinaryOperation{
	public:
		// constructor for the objects of this class.
		Addition(ExpPtr lhs, ExpPtr rhs);
		// evaluate method.
		double evaluate() const override;
};

// Class to store Subtraction operation objects
class Subtraction : public BinaryOperation{
	public:
		// constructor for the objects of this class.
		Subtraction(ExpPtr lhs, ExpPtr rhs);
		// evaluate method.
		double evaluate() const override;
};

// Class to store Multiplication operation objects
class Multiplication : public BinaryOperation{
	public:
		// constructor for the objects of this class.
		Multiplication(ExpPtr lhs, ExpPtr rhs);
		// evaluate method.
		double evaluate() const override;
};

// Class to store Division operation objects
class Division : public BinaryOperation{
	public:
		// constructor for the objects of this class.
		Division(ExpPtr lhs, ExpPtr rhs);
		// evaluate method.
		double evaluate() const override;
};

//Class to store literals
class Literal_ : public Expression{
public:
	// evaluate method
	double evaluate() const override;
	//constructor
	Literal_(double);
	double x_;
};


} // namespace calc

#endif  // !defined(EXPRESSION_H)
