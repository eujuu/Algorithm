#include <iostream>
#include <vector>
#include <queue>
#include <string>
#include <algorithm>
#include <deque>
#include <map>
using namespace std;

bool  comp(pair<int, int>& a, pair<int, int>& b) {
	if (a.second == b.second) return a.first < b.first;
	return a.second < b.second;
}
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	vector<pair<int, int>> arr;
	int n, a,b,ans = 1,start, end;
	cin >> n;
	while (n--) {
		cin >> a >> b;
		arr.push_back({ a,b });
	}
	sort(arr.begin(), arr.end(), comp);
	end = arr[0].second;
	for (int i = 1; i < arr.size(); i++) {
		start = arr[i].first;
		//cout << start << " " << end << endl;
		if (start >= end) {
			end = arr[i].second;
			ans++;
		}
	}
	cout << ans;
	
}