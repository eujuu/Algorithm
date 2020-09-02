#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int n, cnt = 1, tmp, max = 0;
	int a[1000], d[1000];

	cin >> n;
	for (int i = 0; i < n; i++)
		cin >> a[i];
	for (int j = n; j >-1; j--) {
		d[j] = 1;
		for (int i = n-1; i > j; i--) {
			if (a[j] > a[i] && d[j] < d[i] + 1)
				d[j] ++;
		}
		if (max < d[j]) max = d[j];
	}

	cout << max;
}