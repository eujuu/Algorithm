#include <iostream>
using namespace std;

int main() {
	int hbg[3], bvg[2], sum = 0, min = 9999999, tmp1, tmp2;

	cin >> hbg[0] >> hbg[1] >> hbg[2] >> bvg[0] >> bvg[1];
	for (int i = 0; i < 3; i++) {
		tmp1 = hbg[i];
		for (int j = 0; j < 2; j++) {
			tmp2 = bvg[j];
			sum = tmp1 + tmp2 - 50;
			if (sum < min) {
				min = sum;
			}
		}
	}
	cout << min;

}