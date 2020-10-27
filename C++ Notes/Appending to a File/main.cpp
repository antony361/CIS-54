#include <fstream>
#include <iostream>

int main(int argc, char const *argv[])
{
	using namespace std;

	cout << "Opening data.txt for appending.\n";
	ofstream fout;
	fout.open("data.txt", ios::app);
	if (fout.fail( )){
		cout << "Input file opening failed.\n";
		exit(1);
	}

	fout << "\n5 6 pick up sticks.\n" 
	     << "7 8 ain't C++ great!\n";

	fout.close( );
	cout << "End of appending to file\n";

	return 0;
}