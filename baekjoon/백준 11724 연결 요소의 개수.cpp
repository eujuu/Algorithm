#include <iostream>
#include <vector>
#include <queue>
#include <string>
#include <algorithm>
#include <deque>
#include <map>
using namespace std;
vector<int>graph[1001];
int visited[1001];
bool dfs(int n) {
	if (visited[n] == 1) return false;
	visited[n] = 1;
	for (int i = 0; i < graph[n].size(); i++) {
		dfs(graph[n][i]);
	}
	return true;
}
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	int n, m, a, b, answer = 0;;
	cin >> n >> m;
	while (m--) {
		cin >> a >> b;
		graph[a].push_back(b);
		graph[b].push_back(a);
	}
	for (int i = 1; i <= n; i++) {
		if (dfs(i))
			answer++;
	}
	cout << answer;
}