//===========================================
// Algorithm:
// 	1. Take in a 4-digit number
// 	2. Output the sum of its digits
// 	3. Remove the last digit
// 	4. Repeat step 2 & 3
// ===========================================

#include <iomanip>
#include <iostream>
using namespace std;

// ===========================================
// Fctn Name: sum_digits
// Purpose:	sums up the digits of num & returns the result
// Precondition; number is a positive integer
// Postconditions: returns sum of num's digits
// ===========================================

int sum_digits(int number);

// ===========================================
// Fctn Name: remove_last_digits()
// Purpose: remove last digit of a number entered by the user
// Precondition; number is a positive number
// Postconditions: returns the number without last digit
// ===========================================

int remove_last_digits(int number);

int main(int argc, char const *argv[])
{
	int n;
	do{
		cout << "Please enter a 4-digit positive integer: " << endl;
		cin >> n;
		if(n <= 0) 
			cout << "Only 4-digit positive integers allowed. Please try again." << endl;
	}while(n <= 0);
	while(n > 0){
	cout << "Sum of digitss number " << n << " is " << sum_digits(n) << endl;
	n = remove_last_digits(n);
	}
	return 0;
}

int sum_digits(int number){
	int total = 0;
	while(number > 0){
		total = total + (number % 10);
		number = number / 10;
	}	
	return total;
}

int remove_last_digits(int number){
	return number/10;
}
