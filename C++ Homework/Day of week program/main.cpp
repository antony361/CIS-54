//===========================================
// Course: CIS 054 (100616) C/C++ Programming
// Assignment #: Day of Week
// Name: Antonio Razo
// ID: 0942201
// Date: 04/08/2020
// Platform: macOS
// ===========================================
#include <iostream>
#include <string>
using namespace std;
// ======================================================================
// class:   DayOfWeek
// Purpose: Define the class to represent the day of the week
// ======================================================================
class DayOfWeek
{
public:
	// constructors
	DayOfWeek( );
	// getters
	void input( );
	void output( );

private:
	// members
	int weekday;
	string day;
};

int main( )
{
	DayOfWeek data;
  cout << "Please enter three letters for the "
		 << "day of week: (e.g. MON for Monday)\n";
	data.input( );
	data.output( );
	return 0;
}

DayOfWeek::DayOfWeek( ) {
	weekday = 0;
	day = " ";
}

void DayOfWeek::input( ) {
	cin >> day;
  for (int i = 0; i < 3; i++){
    day[i] = tolower(day[i]);
  }
  if (day == "mon")
    weekday = 1;
  else if (day == "tue")
    weekday = 2;
  else if (day == "wed")
    weekday = 3;
  else if (day == "thu")
    weekday = 4;
  else if (day == "fri")
    weekday = 5;
  else if (day == "sat")
    weekday = 6;
  else if (day == "sun")
    weekday = 7;
}

void DayOfWeek::output( ) {
	for (int i = 0; i < 7; i++)
	{
		cout << "This is day " << weekday << " of the week" << endl;
    if (weekday == 7){
      weekday = 0;
    }
     weekday++;
	}
 
}

/* ==========================================================

Problems I had working on this assignment (and how I overcame these problems)
1. I wasn't too sure why we needed to make the input function and output function have input/output streams since the members I was using were all inside the class as private members so instead I just decided to to not use them as parameters and instead call them instead the class methods

2. I dont feel like I really followed the instructions for the assignment however I do feel 
like I completed what was asked 

Other things I would like to share:

1. Sorry I missed the week of the 8th someone in my family became ill and we werent sure exactly what it was so we wanted to make sure everyone in our house was safe I will be available for the rest of the class

2.
========================================================== */