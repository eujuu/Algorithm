#include <iostream>
#include <vector>
#include <queue>
#include <string>
#include <algorithm>
#include <deque>
#include <map>
using namespace std;
vector<int>arr;
int checkSum(int limits) {
	int sum = 0;
	for (int i = 0; i < arr.size(); i++) {
		if (arr[i] <= limits)
			sum += arr[i];
		else
			sum += limits;
	}
	return  sum;
}
int binarySearch(int start, int end, int  tar) {
	int  maxnum = 0, ans =0;
	while (start <= end) {
		int mid = (start + end) / 2;
		int sum = checkSum(mid);
		if (sum <= tar)
			start = mid + 1;
		else
			end = mid - 1;
		
		if (sum >= maxnum && sum <= tar) {
			maxnum = sum;
			ans = mid;
		}
	}
	return ans;
}
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	int n, a, maxnum =0;
	long long total;
	cin >> n;
	while (n--) {
		cin >> a;
		arr.push_back(a);
		if (a > maxnum)
			maxnum = a;
	}
	sort(arr.begin(), arr.end());
	cin >> total;
	cout  << binarySearch(0, maxnum, total);
}