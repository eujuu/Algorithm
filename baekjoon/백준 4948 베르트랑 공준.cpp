#include <iostream>
using namespace std;

int check[123456 * 2 +1] = { 0 };
int main() {
	int  i, n, prime_cnt = 0;
	long long j;

	check[1] = 1;

	for (i = 2; i < 123456 * 2 +1; i++) {
		if (!check[i]) {

			for (j = i * 2; j < 123456 * 2 +1; j += i)
				check[j] = 1;

		}
	}
	while (true) {
		cin >> n;
		if (n == 0)
			break;
		prime_cnt = 0;
		for (int i = n+1; i <=2 * n; i++) {
			if (!check[i]) {
				prime_cnt++;
			}
		}
		cout << prime_cnt << "\n";
	}

	
}