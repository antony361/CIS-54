#include <iostream>
#include <string>
using namespace std;

struct Car
{
	string make;
	string model;
	int year;
};

int main( )
{
	Car my_car = {"VW", "Passet", 2018};
	cout << "My car is a " << my_car.year << " " << my_car.make
		 << " " << my_car.model << endl;

	Car your_car;
	your_car.make = "Ferrari";
	your_car.model = "F60";
	your_car.year = 2014;
	cout << "Your car is a " << your_car.year << " " << your_car.make
	 	 << " " << your_car.model << endl;
	 cout << "Your car is my car --\n";
	 your_car = my_car;


	 cout << "My car is a " << my_car.year << " " << my_car.make
		 << " " << my_car.model << endl; 


	return 0;
}