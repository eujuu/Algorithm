#include <iostream>
#include <math.h>
using namespace std;
int cnt = 0;

long long d[101];
int main() {
	int tc, n;
	cin >> tc;
	d[1] = 1; d[2] = 1; d[3] = 1;
	for (int i = 0; i < tc; i++) {
		cin >> n;
		for (int j = 4; j <= n; j++) {
			d[j] = d[j - 3] + d[j - 2];
		}
		cout << d[n] << "\n";
	}


}