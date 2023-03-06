#include "MapPractice.h"
#include <iostream>
#include <map>
#include <vector>
using namespace std;

int main7() {
	map<string, vector<string>> mp1;

	string key1 = "michael";
	vector<string> value1 = { "name1", "name2" };
	mp1[key1] = value1;

	string key2 = "jennifer";
	vector<string> value2 = { "Hey", "How are u" };
	mp1[key2] = value2;

	for (const pair<string, vector<string>>& pair : mp1)
	{
		const string& key = pair.first;
		const vector<string>& value = pair.second;
		cout << key << " " << value.at(0) << "\n";
	}
	
	return 0;
}