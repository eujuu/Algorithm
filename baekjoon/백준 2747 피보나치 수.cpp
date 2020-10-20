#include <iostream>
#include <vector>
#include <queue>
#include <string>
#include <algorithm>
#include <deque>
#include <map>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	int n;
	vector<int>arr;
	cin >> n;
	arr.push_back(0);
	arr.push_back(1);
	for (int i = 2; i <= n; i++) {
		arr.push_back( arr[i - 1] + arr[i - 2]);
	}
	cout << arr[n];
	
}