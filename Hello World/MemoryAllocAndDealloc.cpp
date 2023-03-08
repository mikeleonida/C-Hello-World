#include "MemoryAllocAndDealloc.h"
#include <iostream>
#include <vector>
using namespace std;

struct Employee {
	int id;
	string name;

	Employee() {}

	Employee(int id, string name) {
		this->id = id;
		this->name = name;
	}
	void print() {
		cout << "Employee " << name << " has id " << id << ".\n";
	}
};

int main() {
	Employee e1(23, "Jennifer");
	e1.print();

	Employee* e2{ new Employee(45, "Michael") };
	e2->print();

	Employee* e3 = new Employee();
	(*e3).print();

	Employee* e4 = e2;
	Employee* e5{ &e1 };

	Employee& e6 = *e2;
	e2->id = 222;
	e6.print();

	vector<Employee*> vec;
	vec.push_back(e2);
	vec.push_back(&e6);

	// delete ONLY the "new" created
	delete e2;
	delete e3;
	e2 = e3 = nullptr;

	return 0;
}