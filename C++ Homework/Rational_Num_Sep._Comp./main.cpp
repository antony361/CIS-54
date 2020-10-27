#include <iostream>
#include "rational.h"
#include <cctype>
#include <cstdlib>
using namespace std;

int main() {

	Rational b(1,2);
	Rational a;
	cout << "Welcome to the Rational World of Wonders!\n";
	
	cin >> a;

	test_rational(b, a);

	return 0;
}

/* ==========================================================

Problems I had working on this assignment (and how I overcame these problems)

1. N/A

2.

========================================================== */