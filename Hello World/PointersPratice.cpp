#include "PointersPratice.h"
#include <iostream>
#include <vector>
using namespace std;

int main9() {
	int val = 12;
	int &ref = val;

	cout << val << " " << &val << "\n";
	cout << ref << " " << &ref << "\n";

	int *ptr = &val;
	cout << *ptr << " " << ptr << " " << &ptr << "\n";

	ptr = nullptr; // points to nothing
	double *ptr2 = nullptr; // or double* ptr2 = NULL also OK
	double *ptr3 = 0; // also nullptr

	int val1 = 10, val2 = 20;
	int *p1 = &val1;
	int *p2 = &val2;
	p1 = p2;
	cout << *p1 << " " << *p2 << "\n";

	p1 = &val1;
	swap(p1, p2);
	cout << *p1 << " " << *p2 << "\n";

	vector<int> v { 5, 6, 7 };
	vector<int>* ptr5 = &v;
	*ptr5 = vector<int> (10);
	cout << v.size();

	int arr[]{ 3, 5, 7, 9 };
	int* p = arr;

	cout << p + 0 << " " << &arr[0] << "\n";
	cout << p + 1 << " " << &arr[1] << "\n";

	cout << *(p + 0) << " " << arr[0] << "\n";
	cout << *(p + 1) << " " << arr[1] << "\n";

	cout << *(p + 3) << " " << *p + 3 << "\n";
	
	p = arr + 3;
	cout << p - arr << "\n";

	p = arr;
	cout << ++*p << "\n";
	cout << p - arr << "\n";

	return 0;
}