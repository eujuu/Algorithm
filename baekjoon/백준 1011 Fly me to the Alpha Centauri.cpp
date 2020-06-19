#include <iostream>
#include <cmath>
int main() {
	using namespace std;

	long long T, x, y, cnt, i, length;
	cin >> T;
	for (int j = 0; j < T; j++) {
		cin >> x >> y;
		i = 1;
		length = y - x;
		for (;; i++) {
			if (i * i > length)
				break;
		}
		if ((i - 1)*(i - 1) == length)
			cnt = 2 * (i - 1) - 1;

		else if ((pow(i, 2) + pow(i - 1, 2)) / 2 >= length)
			cnt = 2 * (i - 1);

		else
			cnt = 2 * i - 1;

		cout << cnt << "\n";
	}
}