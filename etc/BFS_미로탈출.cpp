#include <iostream>
#include <vector>
#include <queue>
#include <string>
#include <algorithm>
using namespace std;
//πÃ∑Œ ≈ª√‚
int dx[] = { 0, -1, 0, 1 };
int dy[] = { 1, 0, -1, 0 };
int map[5][6] = { {1, 0, 1, 0, 1, 0}, {1, 1, 1, 1, 1, 1}, {0,  0 , 0, 0, 0, 1}, {1, 1, 1, 1, 1, 1}, {1, 1, 1, 1, 1, 1} };
int w = 5;
int h = 6;

int bfs(int x, int y) {
	queue<pair< int, int>> q;
	q.push(make_pair(x, y));

	while (!q.empty()) {
		int x_pos = q.front().first;
		int y_pos = q.front().second;
		q.pop();
		for (int i = 0; i < 4; i++) {
			int nx = x_pos + dx[i];
			int ny = y_pos + dy[i];

			if (nx < 0 || nx >= w || ny < 0 || ny >= h) continue;
			if (map[nx][ny] == 0) continue;

			if (map[nx][ny] == 1) {
				map[nx][ny] = map[x_pos][y_pos] + 1;
				q.push(make_pair(nx, ny));
			}
		}

	}
	return map[w - 1][h - 1];
}
int main() {
	int result = 0;
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 6; j++) {
			cout << map[i][j] << " ";
		}
		cout << endl;
	}
	

	cout << bfs(0,0);

}