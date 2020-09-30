#include <iostream>
#include <string>
#include <vector>
#include <math.h>
using namespace std;
double pi = 3.1415926535897932;
int main() {
	long double d;
	cin >> d;
	cout << fixed;
	cout.precision(6);
	cout << d * d * pi << endl;
	cout << d * d * 2 << endl;
}