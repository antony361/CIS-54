#include <string>
#include <iostream>
using namespace std;

// ==================================================
// Function:      capitalize
// Purpose:       Returns input capitalized, non-letters are ignored and kept the same
// Examples:      tAco BeLL lUi ---> Taco Bell Lui
// Parameters:
//          input - input string 
// ==================================================
void capitalize(string &input);

// ==================================================
// Function:      print
// Purpose:       prints all the indexes of a string
// Examples:      string name {"Taco"} --> prints out: Taco 
// Parameters:
//          input - input string 
// ==================================================
void print(string input);

// ==================================================
// Function:      name_finder
// Purpose:       properly places the different names in their correct string variable
// Examples:      Taco Bell Lui --> first_name = "Taco", middle_name = "Bell", last_name = "Lui"
// Parameters:
//          string full_name, string &first, string &middle, string &last - all input strings
// ==================================================
void name_finder(string full_name, string &first, string &middle, string &last);

int main(int argc, char const *argv[])
{
	string full_name,
		   	   first_name, 
		   	   last_name,
		   	   middle_name,
		   	   middle_initial;

	cout << "What is your name?\n";

	getline(cin, full_name);

	name_finder(full_name, first_name, middle_name, last_name);

	capitalize(first_name);
	capitalize(last_name);

	cout << "Your name reformatted: ";
	print(last_name);
	cout << ", ";
	print(first_name);
	cout << ", ";
	if(middle_name[0] != '\0'){ // formats the middle initial
		middle_initial = toupper(middle_name[1]);
		cout << middle_initial << '.';
	} 
	cout << endl;
}
void capitalize(string &input){
	int i;
	if (input[0] == ' ') // for some reason the last name had an extra space in the beggining this fixes that
		for (i = 0; input[i] != '\0'; i++)
			input[i] = input[i + 1];
	
	input[0] = toupper(input[0]);

	for (i = 1; input[i] != '\0'; i++) {
		input[i] = tolower(input[i]);
	}
}

void print(string input){
	for (int i = 0; input[i] != '\0'; i++) {
		cout << input[i];
	}
}

void name_finder(string full_name, string &first, string &middle, string &last){
	int word, f, m, l, size;
	word = f = m = l = 0;
	
	size = full_name.size();

	for (int i = 0; i < size; ++i){ // this loop puts each word in its appropirate string
		if (full_name[i] == ' ') // number of times there is a space shows how many words there are + 1
			word++;
		if (word == 0)
			first[f++] = full_name[i];
		if (word == 1)
			middle[m++] = full_name[i];
		if (word == 2)
			last[l++] = full_name[i];
	}
	if (last[0] == '\0') // checks if last name is empty if it is then that means there is no middle name this moves so that last name is middle name
		for(int i = 0; middle[i] != '\0'; i++){
      		last[i] = middle[i];
      		middle[i] = '\0';
    	}
}