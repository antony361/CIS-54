#include <iostream>
#include <iomanip>
using namespace std;


// ===========================================
// Fctn Name: get_bday_input
// Purpose: get user input of their birthday
// Precondition: aslong their real birthday
// Postconditions: N/A
// Calls: calculate_life_path_number
// ===========================================
void get_bday_input(int& bday, int& bmonth, int& byear);

// ===========================================
// Fctn Name: calculate_life_path_number
// Purpose: using sum_all_digits adds bday + bmonth + year using 
// sum_to_single_digits
// Precondition: all numbers are positive
// Postconditions: gives life number
// Calls: sum_to_single_digit and sum_all_digits
// ===========================================
int calculate_life_path_number(int bday, int bmonth, int byear);

// ============================================
// Name:  sum_to_single_digit
// Purpose:   sum digits of number & return the result
// Precondition:   number is a positive number
// Postcondition: returns sum of number’s digits
// Calls:  n/a
// ============================================
int sum_to_single_digit(int num);

// ===========================================
// Fctn Name: sum_all_digits
// Purpose: add year + month + day
// Precondition: positive numbers
// Postconditions: returns sum of all digits
// Calls: n/a
// ===========================================
int sum_all_digits(int num);

int main() {

  int day, month, year;

  get_bday_input(day, month, year);
  cout << "your life path number is " <<   calculate_life_path_number(day, month, year) << endl;

  return 0;
}

void get_bday_input(int& bday, int& bmonth, int& byear){
	cout << "Enter birthday separated by space: ";
	cin >> bday >> bmonth >> byear;
}

int calculate_life_path_number(int bday, int bmonth, int byear){
	int num = bday + bmonth + byear;

	return sum_to_single_digit(num);
}

int sum_to_single_digit(int num){
	int total = 0;
	do{
		total = total + (num % 10);
		num = num / 10;
	}while(num > 0);
	if(total >= 10){
		return sum_all_digits(total);
	}else{
	return total;
	}
}

int sum_all_digits(int num){
	int total = 0;
	do{
		total = total + (num % 10);
		num = num / 10;
	
	}while(num > 0);
	return total;
}


