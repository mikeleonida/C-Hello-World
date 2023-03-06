#include "StackPractice.h"
#include<iostream>
#include<stack>
// #include <bits/stdc++.h> // this fixes most needed imports, especially string apparently
using namespace std;

void print(stack<string> &s) {
	cout << "Stack elements: ";
	while (!s.empty()) {
		cout << s.top() << " ";
		s.pop();
	}
	cout << "\n";
}

void print_front(deque<int>& q) {
	cout << "Deque elements (front): ";

	deque<int>::iterator it = q.begin();

	while (it != q.end()) {
		cout << *it << " ";
		++it;
	}
	cout << "\n";
}

int count_lowers(const string& str) {
	int count = 0;
	for (auto it = str.begin(); it != str.end(); ++it) {
		char ch = *it;
		count += (islower(ch) > 0);
	}
	return count;
}

int main6() {
	stack<string> s;
	s.push("mike");
	s.push("jenny");
	s.push("ashley");
	s.push("elisabeth");

	print(s);
	print(s);
	
	deque<int> q{ 1, 2, 3, 4, 5, 6 };
	print_front(q);

	cout << count_lowers("abcdeF") << " ";
	cout << count_lowers("ABCDEF") << "\n";

	return 0;
}
