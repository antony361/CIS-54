#include <iostream>
#include "rational.h"
using namespace std;

Rational::Rational(int num, int den)
{
  numerator = num;
  denominator = den;
}

Rational::Rational(int whole_number)
{
  numerator = whole_number;
}

Rational::Rational() // default constructor sets numerator to 0 makes sure denominator is never 0
{
  numerator = 0;
  denominator = 1;
}

istream& operator >>(istream& ins, Rational& fraction)
{
  int num;
  int den;
  char slash;
  do{
    cout << "Please enter a rational number for this calculation (e.g. 1/3):\n";
    ins >> num >> slash >> den;
  }while(slash != '/');
    
  fraction.numerator = num;
  fraction.denominator = den;
  return ins;
}

/* Correctly outputs a fraction and reduces the fraction at the same time*/
ostream& operator <<(ostream& outs, const Rational& fraction)
{
  if (fraction.numerator % fraction.denominator == 0){
    simplify(fraction.numerator, fraction.denominator);
    return outs;
  }
  else{  
    outs << fraction.numerator << "/" << fraction.denominator;
    return outs;
  }

}
/* Adds two fractions.
@param fraction1 : a fraction.
@param fraction1 : a fraction.
@return : fraction1 + fraction2.
*/
Rational operator +(const Rational& fraction1, const Rational& fraction2)
{
  Rational temp;

  temp.numerator = ((fraction1.numerator * fraction2.denominator) + (fraction2.numerator * fraction1.denominator));
  temp.denominator = (fraction1.denominator * fraction2.denominator);

  return temp;
}

/* Subtracts two fractions.
@param fraction1 : a fraction.
@param fraction1 : a fraction.
@return : fraction1 - fraction2.
*/
Rational operator -(const Rational& fraction1, const Rational& fraction2)
{
  Rational temp;

  temp.numerator = ((fraction1.numerator * fraction2.denominator) - (fraction2.numerator * fraction1.denominator));
  temp.denominator = (fraction1.denominator * fraction2.denominator);

  return temp;
}

/* Multiplies two fractions.
@param fraction1 : a fraction.
@param fraction1 : a fraction.
@return : fraction1 * fraction2.
*/
Rational operator *(const Rational& fraction1, const Rational& fraction2)
{
  Rational temp;

  temp.numerator = (fraction1.numerator * fraction2.numerator);
  temp.denominator = (fraction1.denominator * fraction2.denominator);

  return temp;
}

/* Checks whether a fraction1 is greater than another fraction2.
@param fraction1 : a fraction.
@param fraction1 : a fraction.
@return :a Rational fraction that is the quotient of fraction1 and fraction2
*/
Rational operator /(const Rational& fraction1, const Rational& fraction2)
{
  Rational temp;

  temp.numerator = (fraction1.numerator * fraction2.denominator);
  temp.denominator = (fraction1.denominator * fraction2.numerator);

  return temp;
}
/* Checks whether a fraction1 is equal than another fraction2.
@param fraction1 : a fraction.
@param fraction1 : a fraction.
@return :a boolean whether fraction1 == fraction2.
*/
bool operator ==(const Rational& fraction1, const Rational& fraction2)
{
  Rational temp1, temp2;
  temp1.numerator = (fraction1.numerator * fraction2.denominator);
  temp1.denominator = (fraction1.denominator * fraction2.denominator);
  temp2.numerator = (fraction2.numerator * fraction1.denominator);
  temp2.denominator = (fraction2.denominator * fraction1.denominator);
  return (temp1.numerator == temp2.numerator);
}

/* Checks whether a fraction1 is less than another fraction2.
@param fraction1 : a fraction.
@param fraction1 : a fraction.
@return :a boolean whether fraction1 < fraction2.
*/
bool operator <(const Rational& fraction1, const Rational& fraction2)
{
  Rational temp1, temp2;
  temp1.numerator = (fraction1.numerator * fraction2.denominator);
  temp1.denominator = (fraction1.denominator * fraction2.denominator);
  temp2.numerator = (fraction2.numerator * fraction1.denominator);
  temp2.denominator = (fraction2.denominator * fraction1.denominator);
  return (temp1.numerator < temp2.numerator);
}

/* Checks whether fraction1 is less than or equal to fraction2.
@param fraction1 : a fraction.
@param fraction2 : a fraction.
@return : fraction1 <= fraction2. 
*/
bool operator <=(const Rational& fraction1, const Rational& fraction2)
{
  Rational temp1, temp2;
  temp1.numerator = (fraction1.numerator * fraction2.denominator);
  temp1.denominator = (fraction1.denominator * fraction2.denominator);
  temp2.numerator = (fraction2.numerator * fraction1.denominator);
  temp2.denominator = (fraction2.denominator * fraction1.denominator);
  return (temp1.numerator <= temp2.numerator);
}

/* Checks whether a fraction1 is greater than another fraction2.
@param fraction1 : a fraction.
@param fraction1 : a fraction.
@return :a boolean whether fraction1 > fraction2.
*/
bool operator >(const Rational& fraction1, const Rational& fraction2)
{
  Rational temp1, temp2;
  temp1.numerator = (fraction1.numerator * fraction2.denominator);
  temp1.denominator = (fraction1.denominator * fraction2.denominator);
  temp2.numerator = (fraction2.numerator * fraction1.denominator);
  temp2.denominator = (fraction2.denominator * fraction1.denominator);
  return (temp1.numerator > temp2.numerator);
}

/*
  Checks whether a fraction1 is greater than or equal to fraction2.
  @param fraction1 : a fraction.
  @param fraction2 : a fraction.
  @return : a boolean whether fraction1 >= fraction2
*/
bool operator >=(const Rational& fraction1, const Rational& fraction2)
{
  Rational temp1, temp2;
  temp1.numerator = (fraction1.numerator * fraction2.denominator);
  temp1.denominator = (fraction1.denominator * fraction2.denominator);
  temp2.numerator = (fraction2.numerator * fraction1.denominator);
  temp2.denominator = (fraction2.denominator * fraction1.denominator);
  return (temp1.numerator >= temp2.numerator);
}

void test_rational(const Rational& base, const Rational& user_input) {
  cout << user_input << " + " << base << " = " << (user_input + base) << endl; 
  cout << user_input << " - " << base << " = " << (user_input - base) << endl; 
  cout << user_input << " * " << base << " = " << (user_input * base) << endl; 
  cout << user_input << " / " << base << " = " << (user_input / base) << endl;  
  cout << user_input << " == " << base << " : "; 
    (user_input == base) ? cout << "true\n" : cout << "false\n";
  cout << user_input << " < " << base << " : ";  
    (user_input < base) ? cout << "true\n" : cout << "false\n";
  cout << user_input << " <= " << base << " : "; 
    (user_input <= base) ? cout << "true\n" : cout << "false\n";
  cout << user_input << " > " << base << " : ";  
    (user_input > base) ? cout << "true\n" : cout << "false\n";
  cout << user_input << " >= " << base << " : "; 
    (user_input >= base) ? cout << "true\n" : cout << "false\n"; 

}

/* Converts a character into an integer!
@param c: a character.
*/
int digit_to_int(char c)
{
  return (static_cast<int>(c) - static_cast<int>('0') );
}
/* 
Purpose: Simplifies a fraction.
For the extra point!
i.e. : 
1.     20/4 = 5.
2.     15/3 = 5.
*/
int simplify(int num, int den)
{
  bool negative = num < 0;
  
  if (num == 0){
    cout << 0;
    return 0;
  }
  else if (num % den == 0) 
  {
    int total = 0;
    int add = den;
    if (negative) {
      add *= -1;
    }
    while (!(num == 0))
    {
      num -= add;
      total++;
    }
    if (negative){
      cout << -total;
      return total;
    }
    else {
      cout << total;
      return total;
    }
  } else { 
    return 0;
  }
}