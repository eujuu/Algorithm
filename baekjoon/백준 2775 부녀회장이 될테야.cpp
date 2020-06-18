#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>

using namespace std;
int recursiveSum(int a, int b) {
	if (b == 1)
		return 1;
	if (a == 0)
		return b;
	return recursiveSum(a - 1, b) + recursiveSum(a, b - 1);

}
int main() {
	int T, k, n;
	cin >> T;
	for (int i = 0; i < T; i++) {
		cin >> k >> n;
		cout << recursiveSum(k, n) <<"\n";
	}

}

