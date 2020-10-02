#include <iostream>
#include <vector>
#include <queue>
#include <string>
#include <algorithm>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(NULL);
	queue <int> q;
	int n, k, cnt = 1;
	cin >> n >> k;
	cout << "<";
	for (int i = 1; i <= n; i++)
		q.push(i);
	while (!q.empty()) {
		for (int i = 1; i < k; i++) {
			q.push(q.front());
			q.pop();
		}
		cout << q.front();
		q.pop();
		if (!q.empty()) cout << ", ";

	}
	cout << ">";

}