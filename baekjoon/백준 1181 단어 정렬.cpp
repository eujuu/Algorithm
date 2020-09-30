#include <iostream>
#include <string>
#include <vector>
#include <math.h>
#include <algorithm>
using namespace std;
bool comp(string a, string b) {
	if (a.length() == b.length()) return a < b;
	return a.length() < b.length();
}
int main() {
	int n;
	cin >> n;
	vector<string> str;
	for (int i = 0; i < n; i++) {
		string st;
		cin >> st;
		str.push_back(st);
		
	}
	
	sort(str.begin(), str.end(), comp);
	str.erase(unique(str.begin(), str.end()), str.end());
	for (auto st : str)
		cout << st << endl;
}