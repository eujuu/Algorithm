#include <iostream>
#include <string>
#include <vector>
#include <math.h>
#include <algorithm>
using namespace std;
bool desc(char a, char b) {
	return a > b;
}
int main() {
	string str;
	cin >> str;
	sort(str.begin(), str.end(), desc);
	cout << str << endl;
}