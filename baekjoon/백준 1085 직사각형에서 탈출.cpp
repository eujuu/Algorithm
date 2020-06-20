#include <iostream>
using namespace std;

int main() {
	int x, y, w, h, min = 9999, amt = 0;
	cin >> x >> y >> w >> h;

	if (w - x < min)
		min = w - x;
	if (h - y < min)
		min = h - y;
	if (y < min)
		min = y;
	if (x < min)
		min = x;

	cout << min;

}