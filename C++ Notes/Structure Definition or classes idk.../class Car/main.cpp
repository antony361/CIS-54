#include <iostream>
#include <string>
using namespace std;

class Car {
	string make;
	string model;
	int year; 

public:
	void print_car(ostream& outs);
};

int main( )
{
	Car my_car;
	my_car.print_car(cout);
	return 0;
}

void Car::print_car(ostream& outs) {
	int count = 0;
	outs << "This is a ";
	if (year > 0)
		outs << year << " ";
	else
		count++;
	if (!model.empty()) 
		outs << make << " ";
	else
		count++;
	if (count >= 3)
		outs << "car";
	outs << "." << endl;
}