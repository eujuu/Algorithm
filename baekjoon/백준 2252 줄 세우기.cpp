#include <iostream>
#include <vector>
#include <queue>
#include <string>
#include <algorithm>
#include <deque>
#include <map>
using namespace std;
vector<int> graph[32001];
int indegree[32001];
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	vector<int> result;
	queue<int> q;
	int n, m, a, b;
	cin >> n >> m;
	for (int i = 0; i < m; i++) {
		cin >> a >> b;
		graph[a].push_back(b);
		indegree[b] += 1;
	}
	for (int i = 1; i <= n; i++) {
		if (indegree[i] == 0)
			q.push(i);
	}
	while (!q.empty()) {
		int now = q.front();
		q.pop();
		result.push_back(now);
		for (int i = 0; i < graph[now].size(); i++) {
			indegree[graph[now][i]] -= 1;
			if (indegree[graph[now][i]] == 0)
				q.push(graph[now][i]);
		}
	}
	for (auto i : result)
		cout << i << " ";
}