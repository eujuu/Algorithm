#include <iostream>
#include <cmath>
using namespace std;

int main() {
	int N, i, j;
	cin >> N;

	for (i = 0; i < N; i++) {
		for (j = 0; j < i; j++)
			cout << " ";
		for (j = 0; j < 2 * N - 1 - 2 * i; j++)
			cout << "*";
		cout << "\n";
	}
	for (i = (2 * N - 1) / 2 - 3 / 2; i > -1; i--) {
		for (j = 0; j < i; j++)
			cout << " ";
		for (j = 0; j < 2 * N - 1 - 2 * i; j++)
			cout << "*";
		cout << "\n";
	}
	return 0;
}