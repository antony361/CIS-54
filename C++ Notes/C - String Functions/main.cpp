// 8_1a_cstring_strcpy_strcmp_demo.cpp

#include <iostream>
#include <cstring>
using namespace std;

int main(int argc, char const *argv[])
{
	char src_str[12] = "abcdefghijk"; // src - CS jargon
	char target_str[12];
	char target_str2[12];

	strcpy(target_str, src_str);

	if (!strcmp(target_str, src_str)) {
		cout << target_str << endl;
		cout << "They are the same!\n";
	}

	strncpy(target_str2, src_str, 5);

	if (!strncmp(target_str2, src_str, 5)) {
		cout << target_str2 << endl;
		cout << "The first 5 characters are the same!\n";
	}

	return 0;
}