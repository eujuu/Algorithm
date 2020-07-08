#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


int main() {
	int n, a, minidx;
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	vector <int> arr;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> a;
		arr.push_back(a);
	}
	
	sort(arr.begin(), arr.end());
	for (auto k : arr) cout << k << "\n";
}