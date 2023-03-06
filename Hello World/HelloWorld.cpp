#include "HelloWorld.h"
#include <iostream> 
using namespace std;

int hello() {
	cout << "Hello World!" << endl;

	string prompt = "Enter two numbers:";
	cout << prompt << endl;

	double a, b;
	cin >> a >> b;

	cout << "product = " << a * b << "\nsum = " << a + b << endl;

	const int LUCKY_NUMBER{ 25 };

	cout << LUCKY_NUMBER;

	return 0;
}