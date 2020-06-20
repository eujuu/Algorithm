#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;

int main() {
	int side[3], zero_cnt = 0;

	while (true) {
		for (int i = 0; i < 3; i++) {
			cin >> side[i];
			if (side[i] == 0) zero_cnt++;
		}
		if (zero_cnt == 3) break;

		sort(side, side + 3);
		if (pow(side[0], 2) + pow(side[1], 2) == pow(side[2], 2))
			cout << "right" << "\n";
		else
			cout << "wrong" << "\n";
	}

}