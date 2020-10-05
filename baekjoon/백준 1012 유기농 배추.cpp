 #include <iostream>
#include <vector>
#include <queue>
#include <string>
#include <algorithm>
using namespace std;

int dx[] = { 0, -1, 0, 1 };
int dy[] = { 1, 0, -1, 0 };
int visited[51][51];
int map[51][51];
int  m, n;
vector<int> cntarr;
bool dfs(int x, int y) {
	if (visited[x][y] == 1) return false;
	visited[x][y] = 1;
	if (map[x][y] == 0)return false;
	if (map[x][y] == 1) {

		for (int i = 0; i < 4; i++) {
			int nx = x + dx[i];
			int ny = y + dy[i];
			if (nx < 0 || nx >= n || ny < 0 || ny >= m)continue;

			dfs(nx, ny);
			
		}
		return true;
	}
	return false;
}
int main() {
	int tc, k, x, y;
	cin >> tc;
	while(tc--) {
		int result = 0;
		cin >> m >> n >> k;
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < m; j++) {
				map[i][j] = 0;
				visited[i][j] = 0;
			}
		}
		for (int i = 0; i < k; i++) {
			cin >> y >> x;
			map[x][y] = 1;
		}

		for (int i = 0; i < n; i++) {
			for (int j = 0; j < m; j++) {
				if (dfs(i, j) == true)
					result++;
			}
			
		}
		cout << result << endl;
	}

}