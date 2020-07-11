#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;
int alp[26];
int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	string a, b, c, d;
	cin >> a >> b >> c >> d;
	a = a + b;
	c = c + d;
	//string s = to_string(a) + to_string(b);
	//string s1 = to_string(c) + to_string(d);
	cout << stoll(a) + stoll(c); //백준에서는 stoi는 런타임에러가 나더라..?
}