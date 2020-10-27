#include <iostream>
#include <cstring>
using namespace std;

// ==================================================
// Function:      capitalize
// Purpose:       Return str capitalized, non-letters are ignored and kept the same
// Examples:      Taco Bell Lui -> Lui, Taco B. 
// Parameters:
//          str - input string 
// ======================================================================
void capitalize(string name);

int main(int argc, char const *argv[])
{
	char sentence[220] = "";
	string word;
	int i;
	int count = 10;
	char next = ' ';

	// ask user for input
	cout << "Welcome to the world of Capitalization\n"
		 << "=======================================\n"
		 << "Please enter some text:\n";

	// - repeat until 10 words or hit a return character
	while ((count-- > 0) && (next != '\n')) {

		//  - get rid of white spaces
		while (cin.get(next) && (next != '\n') && isspace(next)) {
		}
		if (next == '\n') {
			break;
		} else {
			cin.putback(next);
		}

		// - get one word at a time
		cin >> word;
		
		// cout << word << endl;

		//	- find i's in that word and capitalize it
	}
	
	cout << "Here is the converted text:\n"
		 << sentence << endl;
	cout << word;
	return 0;

}

void capitalize(string name){
	if (name.size() == 0) {
		return;
	}
	name[0] = toupper(name[0]);
	for (int i = 1; i < name.size(); i++) {
		name[i] = tolower(name[i]);
	}
}













