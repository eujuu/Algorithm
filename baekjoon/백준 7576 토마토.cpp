#include <iostream>
#include <vector>
#include <queue>
#include <string>
#include <algorithm>
using namespace std;

int dx[] = { 0, -1, 0, 1 };
int dy[] = { 1, 0, -1, 0 };
int visited[1001][1001];
int map[1001][1001];
int  m, n, ans = 0;
int cnt = 0;
queue<pair<int, int>> q;
//1 = 익은 토마토, 0 == 익지 않은 토마토, -1= 토마토 x
int check_zero() {
	int result = 0;
	for (int i = 0; i < n; i++) {

		for (int j = 0; j < m; j++) {
			if (map[i][j] == 0) return -1;
			else if (visited[i][j] > result) result = visited[i][j];
		}
	}
	return result;
}
void bfs(int x, int y) {
	
	
	q.push(make_pair(x, y));
	while (!q.empty()) {
		
		int first = q.front().first;
		int second = q.front().second;
		q.pop();
		if (map[first][second] == 1) {
			
			for (int i = 0; i < 4; i++) {
				int nx = first + dx[i];
				int ny = second + dy[i];
				if (nx < 0 || nx >= n || ny < 0 || ny >= m)continue;
				if (map[nx][ny] == 0 && visited[nx][ny] == 0) { visited[nx][ny] = visited[first][second] + 1; map[nx][ny] = 1; q.push(make_pair(nx, ny)); }
				
			}
		}
	}


}
int main() {
	int first= 0, second = 0;

	cin >> m >> n;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cin >> map[i][j];
			if (map[i][j] == 1) { cnt++; q.push(make_pair(i, j)); visited[i][j] = 1; }
			else if (map[i][j] == -1) visited[i][j] = 1;
		}
	}
	if (cnt == m * n) { cout << 0; return 0; }
	bfs(first, second);

	ans = check_zero();
	if (ans == -1)cout << -1;
	else cout << ans - 1;


}