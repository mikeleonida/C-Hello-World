#include "Struct.h"
#include <iostream>
#include <algorithm>
using namespace std;

struct employee
{
	string name;
	int age;
	double salary;
	char gender;

	// empty constructor
	employee() {
		name = "";
		age = 0;
		salary = 0.0;
		gender = 'M';
	}

	// parametrized constructor
	employee(string n, int a, double s, char g) {
		name = n;
		age = a;
		salary = s;
		gender = g;
	}

	void read() {
		cout << "Enter employee 4 entries: ";
		cin >> name >> age;
		cin >> salary >> gender;
	}

	void print() {
		cout << name << " has salary " << salary << "\n";
	}
};

const int MAX = 100000;

employee employee_arr[MAX];
int added = 0;

void read_employee(employee &e) {
	cout << "Enter employee name, age, salary and gender:\n";
	cin >> e.name >> e.age;
	cin >> e.salary >> e.gender;
}

void print_employee(const employee& e) {
	cout << e.name << " has salary " << e.salary << "\n";
}

void print_employees() {
	//for (int i = 0; i < added; i++) 
	//		print_employee(employee_arr[i]);

	for (int i = 0; i < added; i++)
		employee_arr[i].print();
}

bool compare_salary(employee& a, employee& b) {
	return a.salary > b.salary;
}

int main4() {
	employee first { "Jennifer", 33, 3200, 'F' };
	employee_arr[added++] = first;

	read_employee(employee_arr[added++]);

	employee_arr[added++].read();
	employee_arr[added++].read();

	print_employees();

	int arr[5] = { 5, 1, 3, 2, 4 };
	sort(arr, arr + 5);
	for (int i = 0; i < 5; i++)
		cout << arr[i] << " ";
	cout << "\n";

	employee_arr[added++] = employee();

	sort(employee_arr, employee_arr + 5, compare_salary);
	print_employees();

	return 0;
}