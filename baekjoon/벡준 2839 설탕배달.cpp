#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>

using namespace std;
int div_35(int n) {
	if (n < 3) return -1;
	int quot = n / 5;
	while (quot >= 0) {
		int tmp = n - (5 * quot);
		if (tmp % 3 == 0)
			return quot + (tmp / 3);
		quot--;
	}
	return -1;
}

int main() {
	int N, cnt = 0;
	cin >> N;
	
	cnt = div_35(N);
	cout << cnt;

}