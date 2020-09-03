#include <iostream>
#include <math.h>
using namespace std;
int cnt = 0;

long long d[31] = { 0 };
int main() {
	int tc, n;
	cin >> tc;
	d[0] = 1; d[1] = 0; d[2] = 3; d[3] = 0;
	for (int i = 4; i <= tc; i++) {
		if (i % 2 == 0) {
			for (int j = 2; j <= i; j += 2)
				if (j == 2)
					d[i] = 3 * d[i - 2];
				else
					d[i] += 2 * d[i - j];
		}
		else
			d[i] = 0;
	}
	cout << d[tc]<< "\n";
}