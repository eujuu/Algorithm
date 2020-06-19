#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
	int N, i = 6, cnt = 1;

	cin >> N;

	if (N == 1) {
		cout << 1;
		return 0;
	}
	N--;
	while (true) {
		if (N <= i) {
			cout << cnt +1;
			break;
		}
		cnt++;		
		i += (6 *cnt);
		
	}

	return 0;

}

