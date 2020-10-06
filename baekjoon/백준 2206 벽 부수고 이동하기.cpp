#include <iostream>
#include <vector>
#include <queue>
#include <string>
#include <algorithm>
using namespace std;

int dx[] = { 0, -1, 0, 1 };
int dy[] = { 1, 0, -1, 0 };
int visited[1001][1001][2];
int map[1001][1001];
int  m, n, ans = 0;
int cnt = 0;
queue<pair<pair<int, int>, int>> q;
int bfs() {
	q.push({ { 1,1 }, 1 });
	while (!q.empty()) {
		int first = q.front().first.first;
		int second = q.front().first.second;
		int block = q.front().second;
		q.pop();
		if (second == m  && first == n)
			return visited[first][second][block];
		for (int i = 0; i < 4; i++) {
			int nx = first + dx[i];
			int ny = second + dy[i];
			if (nx < 1 || nx > n || ny < 1 || ny > m) continue;
			if (map[nx][ny] == 1 && block) {
				visited[nx][ny][block - 1] = visited[first][second][block] + 1;
				q.push({ {nx, ny}, block - 1 });
			}
			if (map[nx][ny] == 0 && visited[nx][ny][block] == 0) {
				visited[nx][ny][block] = visited[first][second][block] + 1;
				q.push({ {nx, ny}, block });
			}
		}
	}
	return -1;
}
int main() {
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= m; j++) {
			scanf_s("%1d", &map[i][j]);
		}
	}
	visited[1][1][1] = 1;
	cout << bfs();
}