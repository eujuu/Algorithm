#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int a, b, c;
	cin >> a >> b >> c;
	cout << (a + b) % c << endl;
	cout << ((a%c) + (b%c)) % c << endl;
	cout << (a*b) % c << endl;
	cout << ((a%c) * (b%c)) % c;
}