#include <iostream>
#include <vector>
#include <queue>
#include <string>
#include <algorithm>
using namespace std;

int main() {
	int tc;
	long long h, w, n;
	string str;
	cin >> tc;
	for (int i = 0; i < tc; i++) {
		cin >> h >> w >> n;
		if (n % h == 0) {
			cout << h;
			if (n / h < 10) cout << 0;
			cout << n / h;
		}
		else {
			cout << n % h;
			if ((n / h +1) < 10) cout << 0;
			cout << n / h + 1;

		}
		cout << endl;
	}
	
}
