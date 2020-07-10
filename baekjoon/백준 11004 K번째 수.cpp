#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;
int arr[10001] = { 0, };
int main() {
	int n,k,a ;
	vector <int> arr;
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	cin >> n >> k;
	for (int i = 0; i < n; i++) {
		cin >> a;
		arr.push_back(a);
	}
	sort(arr.begin(), arr.end());

	cout << arr[k - 1];

}