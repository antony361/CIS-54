//
//  money.h
//  demo12_1a_money_class
//
//  Created by Monza on 11/20/19.
//  Copyright © 2019 monzapp. All rights reserved.
//

#ifndef money_h
#define money_h 
using namespace std;

//Class for amounts of money in U.S. currency.
class Money
{
public:
    friend Money operator +(const Money& amount1, const Money& amount2);
    //Precondition: amount1 and amount2 have been given values.
    //Returns the sum of the values of amount1 and amount2.
    
    friend Money operator -(const Money& amount1, const Money& amount2);
    //Returns amount 1 minus amount2.
    
    friend bool operator ==(const Money& amount1, const Money& amount2);
    //Precondition: amount1 and amount2 have been given values.
    //Returns true if the amount1 and amount2 have the same value;
    //otherwise, returns false.
    
    friend Money operator -(const Money& amount);
    //Returns the negative of the value of amount.
    
    friend bool operator < (const Money& amount1, const Money& amount2);
    //Returns true if amount1 is less than amount2; false otherwise.
    
    Money(long dollars, int cents);
    //Initializes the object so its value represents an amount with the
    //dollars and cents given by the arguments. If the amount is negative,
    //then both dollars and cents must be negative.
    
    Money(long dollars);
    //Initializes the object so its value represents $dollars.00.
    
    Money( );
    //Initializes the object so its value represents $0.00.
    
    double get_value( );
    //Precondition: The calling object has been given a value.
    //Returns the amount of money recorded in the data of the calling object.
    
    friend istream& operator >>(istream& ins, Money& amount);
    //Overloads the >> operator so it can be used to input values of type Money.
    //Notation for inputting negative amounts is as in -$100.00.
    //Precondition: If ins is a file input stream, then ins has already been
    //connected to a file.
    
    friend ostream& operator <<(ostream& outs, const Money& amount);
    //Overloads the << operator so it can be used to output values of type Money.
    //Precedes each output value of type Money with a dollar sign.
    //Precondition: If outs is a file output stream,
    //then outs has already been connected to a file.
private:
    long all_cents;
};



int digit_to_int(char c);
//Function declaration for function used in the definition of Money::input:
//Precondition: c is one of the digits '0' through '9'.
//Returns the integer for the digit; for example, digit_to_int('3') returns 3.

#endif /* money_h */
