#include <iostream>
#include <vector>
#include <queue>
#include <string>
#include <algorithm>
#include <deque>
#include <map>
using namespace std;
vector<int >arr;
vector<int> tar;
int binarySearch(int start, int end, int tar) {
	while (start <= end){
		int mid = (start + end) / 2;
		if (arr[mid] == tar)
			return 1;
		else  if (arr[mid] > tar)
			end = mid - 1;
		else
			start = mid + 1;
	}
	return 0;
}
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	int n, m, a;
	cin >> n;
	while (n--) {
		cin >> a;
		arr.push_back(a);
	}
	cin >> m;
	while (m--) {
		cin >> a;
		tar.push_back(a);
	}
	sort(arr.begin(), arr.end());
	for (int i = 0; i < tar.size(); i++) {
		cout << binarySearch(0, arr.size(), tar[i]) << " ";
	}

}