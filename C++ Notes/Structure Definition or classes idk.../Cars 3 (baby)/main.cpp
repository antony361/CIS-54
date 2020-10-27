#include <iostream>
#include <string>
using namespace std;

class Car 
{
	// members, private by default
	string make;
	string model;
	int year;
	string city;
	string state;

  	public:
  		Car();
  		Car(string car_make,string car_model, int car_year, string us_city, string us_state);
  		// accessors 
  		string get_city();
  		string get_state();
  		// modifiers 
  		void set_city(string us_city);
  		void set_state(string us_state);
  		// others 
  		void print_car(osstream& outs);
};

int main( )
{
	Car my_car("VW", "Passat", 2018, "San Jose", "CA");
	my_car.print_car(cout);

	Car your_car("Ferrari", "F60", 2014, "San Jose", "CA");
	your_car.print_car(cout);

	your_car.set_city()
	return 0;
}