#include <iostream>
#include <vector>
#include <queue>
#include <string>
#include <algorithm>
using namespace std;
/*
int binarySearch(vector<int>& arr, int start, int end, int tar) {
	if (start > end) return -1;
	int mid = (start + end) / 2;

	if (arr[mid] == tar) return mid;
	else if (arr[mid] > tar) return binarySearch(arr, start, mid - 1, tar);
	else return binarySearch(arr, mid + 1, end, tar);
}
*/
int binarySearch(vector<int>& arr, int start, int end, int tar) {
	while (start <= end) {
		int mid = (start + end) / 2;
		if (arr[mid] == tar) return mid;
		else if (arr[mid] > tar) end = mid - 1;
		else start = mid + 1;

	}
	return -1;
}
int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(NULL);
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
		int result = binarySearch(arr, 0, arr.size()-1, n);
		if (result != -1) printf("1\n");
		else printf( "0\n" );

	}
}