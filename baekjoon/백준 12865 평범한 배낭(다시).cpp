#include <iostream>
#include <vector>
#include <queue>
#include <string>
#include <algorithm>
#include <deque>
#include <map>
using namespace std;
int dp[101];
bool comp(pair<long long, int>&a, pair<long long, int>& b) {
	if (a.first == b.first) return a.second < b.second;
	return a.first < b.first;
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	int n, k,b;
	long long a;
	vector<pair<long long, int>> arr;
	
	cin >> n >> k;
	for (int i = 0; i < n; i++) {
		cin >> a >> b;
		arr.push_back(make_pair(a, b));
	}
	sort(arr.begin(), arr.end(), comp);
	int sum = arr[0].first;
	dp[0] = arr[0].second;
	for (int i = 1; i < n - 1; i++) {
		if (sum + arr[i].first <= k) {
			sum += arr[i].first;
			dp[i] = arr[i].second + dp[i - 1];
		}
		else {
			dp[i] = arr[i].second;
			sum = 0;
		}
	}
	int maxnum = 0;
	for (int i = 0; i < n; i++) {
		if (dp[i] >= maxnum)
			maxnum = dp[i];
	}
	cout << maxnum;
}