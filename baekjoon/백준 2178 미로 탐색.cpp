 #include <iostream>
#include <vector>
#include <queue>
#include <string>
#include <algorithm>
using namespace std;

int dx[] = { 0, -1, 0, 1 };
int dy[] = { 1, 0, -1, 0 };
int visited[101][101];
int map[101][101];
int  m, n;
vector<int> cntarr;
int bfs(int x, int y) {
	queue<pair<int, int>>q;
	q.push(make_pair(x, y));
	while (!q.empty()) {
		int first = q.front().first;
		int second = q.front().second;

		q.pop();
		for (int i = 0; i < 4; i++) {
			int nx = first + dx[i];
			int ny = second + dy[i];
			if (nx < 0 || nx >= n || ny < 0 || ny >= m) continue;
			if (map[nx][ny] == 0) continue;
			if (map[nx][ny] == 1)
			{
				map[nx][ny] = map[first][second] + 1;
				q.push(make_pair(nx, ny));
			}
		}
	}
	return map[n - 1][m - 1];
}
int main() {
	int tmp;
	cin >> n >> m;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			scanf_s("%1d", &tmp);
			map[i][j] = tmp;
		}
	}
	int ans = bfs(0, 0);
	
	/*for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cout << map[i][j] << " ";
		}
		cout << endl;
	}*/
	cout << ans;

}