#include <iostream>
#include <string>
#include <vector>
#include <math.h>
using namespace std;
long long n[1000001];
int main() {
	int n, sum = 0, tmp = 0, ans= -9999;
	cin >> n;

	for (int i = 0; i < n; i++) {
		sum = i; tmp = i;
		while (tmp > 0) {
			sum += (tmp % 10);
			tmp = tmp / 10;

		}
		
		if (sum == n) {
			ans = i; break;
		}
	}
	if (ans == -9999) cout << 0 << endl;
	else cout << ans << endl;
}