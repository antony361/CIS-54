#include <string>
#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
	string input;

	getline(cin, input);

	input[0] = toupper(input[0]);
	for (int i = 0; input[i] != '\0'; i++) {
		input[i] = tolower(input[i]);
	}
	for (int i = 0; input[i] != '\0'; i++)
		cout << input[i];
	return 0;
}