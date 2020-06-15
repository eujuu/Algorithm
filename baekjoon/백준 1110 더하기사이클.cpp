#include <iostream>
using namespace std;

int main() {
	int N, tmp = -1, one_v, ten_v, count = 0;
	cin >> N;
	tmp = N;
	while (true) {

		one_v = tmp % 10; ten_v = tmp / 10;
		tmp = (one_v * 10) + ((one_v + ten_v) % 10);

		count++;
		if (tmp == N)
			break;

	}
	cout << count;
}