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
	int n;
	cin >> n;
	for (int i = 1; i <= n; i++)
		q.push(i);
	while (q.size() > 1) {
		q.pop();
		int first = q.front();
		q.pop();
		q.push(first);
	}
	cout << q.front();
}