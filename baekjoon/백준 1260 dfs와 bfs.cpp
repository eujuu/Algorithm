#include <iostream>
#include <stack>
#include <string>
#include <queue>
using namespace std;
int map[1001][1001] ;
int visited_dfs[1001];
int visited_bfs[1001];
queue<int> q;
int n, m, v;
void dfs(int v) {
	cout << v << " ";
	visited_dfs[v] = 1;
	for (int i = 1; i <= n; i++) {
		if (map[v][i] && !visited_dfs[i])
			dfs(i);
	}
} 
void bfs(int v) {
	visited_bfs[v] = 1;
	q.push(v);

	while (!q.empty()) {
		v = q.front();
		q.pop();
		cout << v << " ";
		for (int i = 1; i <= n; i++) {
			if (map[v][i] && !visited_bfs[i]) {
				q.push(i);
				visited_bfs[i] = 1;
			}
		}
	}
}
int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	cin >> n >> m >> v;

	for (int i = 0; i < m; i++) {
		int a, b;
		cin >> a >> b;
		map[a][b] = 1;
		map[b][a] = 1;
	}
	dfs(v);
	cout << "\n";

	bfs(v);
	cout << "\n";
	return 0;

}