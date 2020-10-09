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
	int a, b, c;
	int n;
	cin >> n;
	vector<int > tmp;
	for(int i=0;i < n;i++) {
		cin >> c;
		tmp.push_back(c);
	}
	sort(tmp.begin(), tmp.end());
	cout << tmp[0] * tmp[n - 1];
}