#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	int x[3], y[3], ans_x, ans_y;

	for (int i = 0; i < 3; i++)
		cin >> x[i] >> y[i];

	sort(x, x + 3);
	sort(y, y + 3);
	for (int i = 0; i < 2; i++) {
		if (x[i] == x[i + 1]) {
			x[i] = 0; x[i + 1] = 0;
		}
			
		if (y[i] == y[i + 1]) {
			y[i] = 0; y[i + 1] = 0;
		}
	}
	for (int i = 0; i < 3; i++) {
		if (x[i] != 0)
			ans_x = x[i];
		if (y[i] != 0)
			ans_y = y[i];
	}
	cout << ans_x << " " << ans_y;

}