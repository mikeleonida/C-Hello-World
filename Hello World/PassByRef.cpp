#include "PassByRef.h"
#include <iostream> 
// #include <cstdlib>
using namespace std;

// arrays are always passed by reference

void change(int a, int& b) {
	a++;
	b++;
}

void read(int x, int& y, string& str) {
	cout << "Enter two numbers, then your name:\n";
	cin >> x >> y >> str;
}

// make str const and pass it by ref in order not to copy it and waste memory
bool is_lower(const string& str) {
	for (int i = 0; i < (int)str.size(); i++)
		if (!islower(str[i]))
			return false;

	return true;
}

int pass_by_ref() {
	/*
	int a = 1, b = 1;
	change(a, b);
	cout << "a=" << a << "\nb=" << b << "\n";

	string name;
	read(a, b, name);
	cout << "a=" << a << "\nb=" << b << "\nYour name is " << name << "\n";
	*/

	// ---------------------
	
	cout << is_lower("abc") << "\n";
	cout << is_lower("aBc") << "\n";
	cout << is_lower("123") << "\n";

	return 0;
}

