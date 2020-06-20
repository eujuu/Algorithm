#include <iostream>
using namespace std;

int check[10001] = { 0 };
int main() {
	int tmp, M, N, i, sum = 0, prime_cnt = 0, min = 9999;
	long long j;

	check[1] = 1;

	for (i = 2; i < 10001; i++) {
		if (!check[i]) {

			for (j = i * i; j < 10001; j += i)
				check[j] = 1;

		}
	}

	cin >> M >> N;
	for (i = M; i <= N; i++) {
		if (!check[i]) {
			sum += i;
			if (i < min)
				min = i;
		}
	}
	if (sum == 0)
		cout << -1;
	else {
		cout << sum << "\n";
		cout << min;
	}
}