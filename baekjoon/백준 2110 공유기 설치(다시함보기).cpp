#include <iostream>
#include <vector>
#include <queue>
#include <string>
#include <algorithm>
using namespace std;
vector<int> house;
int n, c, tmp;
bool check_true(int dist) {
	int cnt = 1;
	int prev = house[0];
	for (int i = 1; i < n; i++) {
		if (house[i] - prev >= dist) {
			cnt++;
			prev = house[i];
		}
		
	}
	if (cnt >= c) return true;
	return false;
}
int main() {
	
	
	cin >> n >> c;
	for(int i=0;i < n;i++){
		cin >> tmp;
		house.push_back(tmp);
	}
	int minnum, maxnum, dist;
	sort(house.begin(), house.end());
	minnum = 1; maxnum = house[n - 1] - house[0];
	int result = 0;
	while (minnum <= maxnum) {
		int mid = (minnum + maxnum) / 2;
		if (check_true(mid)) {
			result = max(result, mid);
			minnum = mid + 1;
		}
		else
			maxnum = mid - 1;
	}
	cout << result;

}