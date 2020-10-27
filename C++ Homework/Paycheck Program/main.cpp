//===========================================
// Course: CIS 054 (100616) C/C++ Programming
// Assignment: Week 1 - Assignment title
// Name: Antonio Razo
// ID: 0942201
// Date: 01/29/2020
// Platform: macOS
// ===========================================
#include <iomanip>
#include <iostream>
using namespace std;

int main( )
{
    // Allows these variables to store decimal values
    double overtime_hours, gross_pay, taxes, net_pay, overtime_pay, hours_worked, pay_rate;
    
    // Formats numbers to show only 2 decimal points
    cout << fixed << setprecision(2);
    
    // Overtime 150% pay per hour and withhold tax rate is 20%
    const double OVERTIME_RATE = 1.5;
    const double TAX_RATE = .2;

    
    // Asks for user input
    cout << "Welcome to your Paycheck Calculator!.\n";
    cout << "Enter the number of hours you have worked:\n";
    cin >> hours_worked;
    cout << "Enter your pay rate per hour:\n";
    cin >> pay_rate;

    // Determines if overtime hours exist and applies overtime rate
    if (hours_worked <= 40){
        gross_pay = hours_worked *pay_rate;
        }
    else{
        overtime_hours = (hours_worked - 40);
        overtime_pay = overtime_hours * OVERTIME_RATE * pay_rate;
        gross_pay = ((40 * pay_rate) + (overtime_pay));
        }
    // Calculates Taxes and calculates net pay (total after taxes)
    taxes = gross_pay * TAX_RATE;
    net_pay = gross_pay - taxes;
    
    // Prints out total gross, taxes and net pay
    cout << "Receipt: \nGross Income: \n$" << gross_pay << "\nTaxes: \n$" << taxes << "\nTotal: \n$" << net_pay << "\n";
}
    
