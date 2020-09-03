#include <iostream>
#include<vector>
#include <algorithm>
using namespace std;
int cnt = 0;

vector<int> arr(1001);
vector<int> plus_d(1001);
vector<int> minus_d(1001);
int main() {
	int n; cin >> n;
	for (int i = 0; i < n; i++)
		cin >> arr[i];
	if (n != 1) {
		for (int i = 0; i < n; i++) {
			plus_d[i] = 1;
			for (int j = 0; j <= i; j++) {
				if (arr[i] > arr[j] && plus_d[i] < plus_d[j] + 1)
					plus_d[i] += 1;
			}
		}
		for (int i = n - 1; i > -1; i--) {
			minus_d[i] = 1;
			for (int j = n - 1; j >= i; j--) {
				if (arr[i] > arr[j] && minus_d[i] < minus_d[j] + 1)
					minus_d[i] += 1;
			}
		}
		int max_plus = 0, idx_plus = 0;
		int max_minus = 0, idx_minus = 0;

		for (int i = 1; i < n - 1; i++) {
			if (plus_d[i] > max_plus) {
				max_plus = plus_d[i];
				idx_plus = i;
			}
			if (minus_d[i] > max_minus) {
				max_minus = minus_d[i];
				idx_minus = i;
			}
		}
		int  max1 = 0, max2 = 0;
		for (int i = idx_plus + 1; i < n; i++) {
			if (minus_d[i] > max1 && arr[idx_plus] != arr[i])
				max1 = minus_d[i];
		}

		for (int i = 0; i < idx_minus; i++) {
			if (plus_d[i] > max2 &&arr[idx_minus] != arr[i])
				max2 = plus_d[i];
		}
		cout << max(max_plus + max1, max_minus + max2) << "\n";
	
	}
	else
		cout << 1 << "\n";
}