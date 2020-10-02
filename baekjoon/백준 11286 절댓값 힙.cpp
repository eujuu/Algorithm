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
	priority_queue <pair<int,int> ,vector<pair<int, int>>, greater<pair<int, int>>> pq;
	int n, tmp;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> tmp;
		if (tmp == 0) {
			cout << (pq.empty() ? 0 : pq.top().second) << "\n";
			if (!pq.empty())pq.pop();
		}

		else
			pq.push(make_pair(abs(tmp), tmp));
	}

	return 0;
}