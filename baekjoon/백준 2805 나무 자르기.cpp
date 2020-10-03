#include <iostream>
#include <vector>
#include <queue>
#include <string>
#include <algorithm>
using namespace std;

int main() {
	vector<int> arr;
	long long start = 1;
	long long end = 0;
	long long max = 0;
	int n, m, tmp;
	scanf("%d%d", &n, &m); //cin >> n >> m;
	for(int i=0; i < n; i++) {
		scanf("%d", &tmp);  // cin >> tmp;
		arr.push_back(tmp);
		if (tmp > end) end = tmp;
	}
	
	
	while (start <= end) {
		long long mid = (start + end) / 2;
		long long sum = 0;
		for (int i = 0; i < n; i++) {
			if (arr[i] > mid)
				sum += (arr[i] - mid);
		}s

		if (sum >= m) {
			start = mid + 1;
			if (mid > max)
				max = mid;
		}
		else end = mid - 1;

	}
	cout << max << endl;

}