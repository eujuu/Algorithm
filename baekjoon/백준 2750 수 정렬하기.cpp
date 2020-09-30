#include <iostream>
#include <string>
#include <vector>
#include <math.h>
#include <algorithm>
using namespace std;

int main() {
	int n, leng = 0;
	cin >> n;
	vector<int>arr;
	for (int i = 0; i < n; i++) {
		int tmp;
		cin >> tmp;
		arr.push_back(tmp);
	}
	sort(arr.begin(), arr.end());
	for (auto num: arr)
		cout << num << endl;
}