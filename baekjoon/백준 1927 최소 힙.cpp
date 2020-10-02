#include <iostream>
#include <vector>
#include <queue>
#include <string>
#include <algorithm>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	priority_queue <int,vector<int>, greater<int>> pq;
	int n, tmp;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> tmp;
		if (tmp == 0) {
			cout << (pq.empty() ? 0 : pq.top()) << "\n";
			if (!pq.empty())pq.pop();
		}

		else
			pq.push(tmp);
	}

	return 0;
}