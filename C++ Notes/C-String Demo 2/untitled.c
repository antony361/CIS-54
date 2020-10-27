#include <iostream>
#include <cstring>

using namespace std;

int main(int argc, char const *argv[])
{
	char full_name[50]
		 first_name[15], 
		 last_name[15],
		 middle_name[15];

	cout << "Welcome to the Awesome Name Formatter!"
		 << "====================================="
		 << "What is your name?";
	cin >> full_name;

	return 0;
}