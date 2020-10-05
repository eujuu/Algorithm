#include <iostream>
#include <vector>
#include <queue>
#include <string>
#include <algorithm>
using namespace std;

int dx[] = { 0, -1, 0, 1 };
int dy[] = { 1, 0, -1, 0 };
int visited[26][26];
int map[26][26];
int label = 1;
vector<int> cntarr;

bool dfs(int x, int y, int& n, int label) {
	if (visited[x][y] == 1) return false;
	visited[x][y] = 1;
	if (map[x][y] == 0) return false;
	
	if (map[x][y] == 1) {
		map[x][y] = label;
		for (int i = 0; i < 4; i++) {
			int nx = x + dx[i];
			int ny = y + dy[i];
			if (nx < 0 || nx >= n || ny < 0 || ny >= n) continue;
			
			//cout << nx << " " << ny << " " << map[nx][ny] << " " << endl;
			dfs(nx, ny, n, label);

		}
		return true;
	}
	
	return false;
}
int main() {
	int n, cnt = 0, tmp;
	cin >> n;
	
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			
			scanf_s("%1d", &tmp);
			map[i][j] = tmp;
			visited[i][j] = 0;
		}
	}

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if(dfs(i, j, n, label) != false){
				cnt++;
				label++;
			}
			
		}
	}

	cout << cnt << endl;
	for (int i = 1; i <= cnt; i++) {
		int cnt = 0;
		for (int x = 0; x < n; x++) {
			for (int y = 0; y < n; y++) {
				if (map[x][y] == i)
					cnt++;
			}
		}
		cntarr.push_back(cnt);
	}
	sort(cntarr.begin(), cntarr.end());
	for (auto i : cntarr)
		cout << i << endl;

}