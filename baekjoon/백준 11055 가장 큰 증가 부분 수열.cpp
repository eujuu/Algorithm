#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int n, cnt = 1, tmp, max = 0, befnum = 0;
	int a[1000], d[1000], max_arr[1000];

	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
		max_arr[i] = a[i];
	}

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < i; j++) {
			if (a[j] < a[i] && max_arr[j] + a[i] > max_arr[i])
				max_arr[i] = max_arr[j] + a[i];
		}
	}
	
	for (int i = 0; i < n; i++) {
		if (max_arr[i] > max)
			max = max_arr[i];
	}
	cout << max << endl;
}