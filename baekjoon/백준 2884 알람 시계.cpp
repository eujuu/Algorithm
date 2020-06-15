#include <iostream>
using namespace std;

int main() {
	int x, y, min;

	cin >> x >> y;
	min = x * 60 + y;
	min = min - 45;

	if (min < 0)
		min += 24 * 60;
	cout << min / 60 << " " << min % 60;

}