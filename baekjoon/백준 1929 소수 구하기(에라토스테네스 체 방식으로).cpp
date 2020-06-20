#include <iostream>
using namespace std;

//에라토스테네스 체
bool check[1000001];
int main() {

	int i, j, M, N;
	check[0] = check[1] = true;

	for (i = 2; i < 1000001; i++) {
		if (check[i] == false) {
			for (j = i * 2; j < 1000001; j += i)
				check[j] = true;

		}
	}

	cin >> M >> N;
	for (i = M; i < N + 1; i++) {
		if (check[i] == false)
			cout << i << '\n';
	}

}