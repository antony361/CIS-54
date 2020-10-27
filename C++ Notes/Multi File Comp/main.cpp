// Adopt from DISPLAY 11.3 Money ClassVersion 1
// Program to demonstrate the class Money.
// Copyright: Your textbook
#include <iostream>
#include "money.h"
using namespace std;

int main( )
{
    Money your_amount, my_amount(10, 9), our_amount;
    cout << "Enter an amount of money: ";
    cin >> your_amount;
    cout << "Your amount negated is ";
    your_amount = -your_amount;
    cout << your_amount;
    cout << endl;
    cout << "My amount is ";
    cout << my_amount;
    cout << endl;
    
    if (your_amount == my_amount)
        cout << "We have the same amounts.\n";
    else
        cout << "One of us is richer.\n";
    our_amount = your_amount+my_amount;
    cout << your_amount;
    cout << " + ";
    cout << my_amount;
    cout << " equals ";
    cout << (your_amount + my_amount);
    cout << endl;
    return 0;
}
