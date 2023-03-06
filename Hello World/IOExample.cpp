#include "IOExample.h"
#include<iostream>
#include<fstream>
using namespace std;

bool write_to_file(string fileOut, string output) {
	ofstream fout(fileOut);

	if (fout.fail()) {
		cout << "Can't open the output file\n";
		return false;
	}
	fout << output;
	fout.close();

	cout << "Numbers written to file";

	return true;
}


int main() {
	bool result = write_to_file("read_file.txt", "27 33 2 7");

	ifstream fin("read_file.txt");

	if (fin.fail()) {
		cout << "Can't open file\n";
		return 0;
	}
	int x, y;
	fin >> x >> y;
	fin.close();
	ofstream fout("my_output.txt");

	if (fout.fail()) {
		cout << "Can't open the output file\n";
		return 0;
	}
	fout << "x * y = "<< x * y;
	cout << x * y;
	fout.close();

	return 0;
}