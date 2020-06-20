#include <iostream>
using namespace std;

int check[1001] = { 0 };
int main() {
	int tmp, total, i, k, prime_cnt = 0, prime;
	long long j;

	check[1] = 1;

	for (i = 2; i < 1001; i++) {
		if (!check[i]) {

			for (j = i * 2; j < 1001; j += i)
				check[j] = 1;

		}
	}

	cin >> total;

	for (i = 0; i < total; i++) {
		cin >> tmp;
		if (!check[tmp])
			prime_cnt++;
	}
	cout << prime_cnt << endl;


}