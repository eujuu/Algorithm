#include <iostream>
#include <string>
using namespace std;

int main() {
	int a, b;
	cin >> a>> b;
	int month[12] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31 , 30, 31 };
	string day[7] = { "SUN", "MON", "TUE", "WED", "THU", "FRI", "SAT" };
	int total = 0;
	for (int i = 1; i < a; i++)
		total += month[i-1];
	total += b;
	cout << day[total % 7];
}