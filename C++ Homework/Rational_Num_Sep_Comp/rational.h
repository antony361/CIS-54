
#ifndef rational_h
#define rational_h
using namespace std;

class Rational {
  
public:
	/*
	(1) a constructor with two arguments that can be used to set the member variables of an object to any legitimate values.*/
  Rational(int num, int den);
	/*(2) a constructor that has only a single parameter of type int; call this single
	parameter whole_number and define the constructor so that the object will be initialized to the rational number whole_number/1.*/
  Rational(int whole_number);
	/*(3) a default constructor that initializes an object to 0 (that is, to 0/1).
	*/
  Rational();
	/*
	Overload:
	(1) the input and output operators >> and <<. Numbers are to beinput and output in the form 1/2, 15/32, 300/401, and so forth. Notethat the numerator, the denominator, or both may contain a minussign so -1/2, 15/32, and -300/-401 are 
	also possible inputs. */
  friend istream& operator >>(istream& ins, Rational& fraction);

  friend ostream& operator <<(ostream& outs, const Rational& fraction);
	/*(2) all of the following operators so that they correctly apply 
	to the typeRational: ==, <, <=, >, >=, +, -, *, and /. 
	*/
  friend Rational operator +(const Rational& fraction1, const Rational& fraction2);

  friend Rational operator -(const Rational& fraction1, const Rational& fraction2);

  friend Rational operator *(const Rational& fraction1, const Rational& fraction2);

  friend Rational operator /(const Rational& fraction1, const Rational& fraction2);

  friend bool operator ==(const Rational& fraction1, const Rational& fraction2);

  friend bool operator <(const Rational& fraction1, const Rational& fraction2);

  friend bool operator <=(const Rational& fraction1, const Rational& fraction2);

  friend bool operator >(const Rational& fraction1, const Rational& fraction2);

  friend bool operator >=(const Rational& fraction1, const Rational& fraction2);

 
private:
	// ================================================
	// Function: test_rational
	// Purpose:  test Rational class
	// Description: Please do not change the code
	// Author: Monza Lui
	// ================================================
	friend void test_rational(const Rational& base, const Rational& user_input);
	// normalize the integers that represent the rational number
  int numerator, denominator;
  int whole, zero;
 
};

int digit_to_int(char c);

int simplify(int num, int den);

#endif 