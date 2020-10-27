#include <iomanip>
#include <iostream>
#include <math.h>
using namespace std;
int main(int argc, char const *argv[])
{
	cout << fixed << setprecision(10);
	double series,
		   count ,
		   n,
		   max_count,	
		   pi;
	char answer;

	cout << "Welcome to the pi approximation calculator!" << endl;
	do{
		series = 0;
		cout << "How many terms do you want to compute pi: ";
		cin >> count;
		max_count = (count - 1);
		for(n = 0; n <= max_count; ++n){
			series += (pow(-1, n))/(2 * n + 1);
		}
		pi = 4 * series;
		cout << "Our pi: " << pi << "e+00"<< endl;
		cout << "Do you want to compute pi again? ";
		cin >> answer;
	}while(answer == 'y' || answer == 'Y');
	return 0;

}