#include <iostream>
using namespace std;

void pass_one_element_by_value(int a);
void pass_one_element_by_reference(int& a);
void pass_array_by_value(const int a[], const int size);
void pass_array_by_reference(int a[], const int size);

int main(int argc, char const *argv[])
{
	const int ARRAY_SIZE = 5;
	int score[ARRAY_SIZE];

	// initialize
	for (int i=0; i<ARRAY_SIZE; i++){
		score[i] = i+10;
	}

	// Pass one element by value
	cout << "Pass one element by value\n";
	cout << "Before: " << score[0] << endl;
	pass_one_element_by_value(score[0]);
	cout << "After: " << score[0] << endl;

	// Pass one element by value
	cout << "Pass one element by reference\n";
	cout << "Before: " << score[0] << endl;
	pass_one_element_by_reference(score[0]);
	cout << "After: " << score[0] << endl;

	// Pass whole array by value
	cout << "Pass whole array by value\n";
	cout << "Before: " << endl;
	for (int a: score) {
		cout << a << endl;
	}
	pass_array_by_value(score, ARRAY_SIZE);
	cout << "After: " << endl;
	for (int a: score) {
		cout << a << endl;
	}

	// Pass whole array by reference 
	cout << "Pass whole array by reference\n";
	cout << "Before: " << endl;
	for (int a: score) {
		cout << a << endl;

	}
	pass_array_by_reference(score, ARRAY_SIZE);
	cout << "After: " << endl;
	for (int a: score) {
		cout << a << endl;
	}

	return 0;
}

void pass_one_element_by_value(int a) {
	a = 21;
}
void pass_one_element_by_reference(int& a) {
	a = 21;
}
void pass_array_by_value(const int a[], const int size){
	cout << "Inside: " << endl;
	for (int i=0; i<size; i++) {
		// a[i] -= 5;
		cout << a[i] << endl;
	}
}
void pass_array_by_reference(int a[], const int size) {
	for (int i=0; i<size; i++) {
		 a[i] += 10;
	}


