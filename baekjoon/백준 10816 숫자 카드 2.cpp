#include <iostream>
#include <vector>
#include <queue>
#include <string>
#include <algorithm>
using namespace std;

int counting(vector<int>& arr, int tar) {
	auto low = lower_bound(arr.begin(),arr.end(), tar);
	auto high = upper_bound(arr.begin(), arr.end(), tar);
	return high - low;
}
int main() {
	vector<int> arr;
	vector<int> tar;
	int n, tmp;
	scanf("%d", &n);
	while (n--) {
		scanf("%d", &tmp);
		arr.push_back(tmp);
	}
	sort(arr.begin(), arr.end());
	int m;
	scanf("%d", &m);
	while (m--) {
		scanf("%d", &tmp);
		tar.push_back(tmp);
	}
	for (auto n : tar) {
		int result = counting(arr, n);
		printf("%d ", result);
		

	}
}