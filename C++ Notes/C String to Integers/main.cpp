
#include <iostream>
#include <cstdlib>
#include <cctype>

using namespace std;

void readAndClean(int& n);
// Reads a line of input. Discards all symbol except the digits. Converts
// the C string to an integer and sets n equal to the value of this integer.

void newLine( );
// Discards all the input remaining on the current input line.
// Also discards the '\n' at the end of the line.

int main(int argc, char const *argv[])
{
	int n;
	char ans;
	do{
		cout << "Enter an integer and press Return: ";
		readAndClean(n);
		cout << "That string converts to the integer " << n << endl
			 << "Again? (yes/no): ";
		cin >> ans;
		newLine( );
	} while( (ans != 'n') && (ans != 'N') );
	return 0;
}

// uses iostream, cstdlin amd cctype
void readAndClean(int& n) {
	const int ARRAY_SIZE = 6;
	char digitString[ARRAY_SIZE];

	char next;
	cin.get(next);
	int index = 0;
	while (next != '\n')
	{
		if ((isdigit(next)) && (index <= ARRAY_SIZE - 1))
		{
			digitString[index] = next;
			index++;
		}
		cin.get(next);
	}
	digitString[index] = '\0';
	n = atoi(digitString);
}

// uses iostream
void newLine( )
{
	char symbol;
	do{
		cin.get(symbol);
	}while (symbol != '\n');
}