#include "Templates.h"
#include <iostream>
using namespace std;

template<typename Type>
Type MyMax(Type a, Type b) {
	return a > b ? a : b;
}

int main5() {
	cout << MyMax(2, 5) << "\n";
	cout << MyMax<int>(2, 5) << "\n";
	cout << MyMax<double>(2.5, 5.4) << "\n";
	cout << MyMax('A', 'X') << "\n";

	//cout << MyMax(2, 5.4) << "\n";
	cout << MyMax<int>(2, 5.4) << "\n";
	cout << MyMax<double>(2, 5.4) << "\n";

	return 0;
}