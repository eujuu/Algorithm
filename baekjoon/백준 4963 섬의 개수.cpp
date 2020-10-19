#include <iostream>
#include <vector>
#include <queue>
#include <string>
#include <algorithm>
#include <deque>
#include <map>
using namespace std;
int dx[] = { -1, 0, 1, 0 , 1, -1, -1, 1};
int dy[] = { 0, -1, 0, 1 , 1, -1, 1, -1};

int w, h;
bool dfs(int n, int m, vector<vector<int>> &visited, vector<vector<int>>& graph) {
	if (visited[n][m] == 1) return false;
	visited[n][m] = 1;
	for (int i = 0; i < 8; i++) {
		int nx = n + dx[i];
		int ny = m + dy[i];
		if (nx < 0 || nx >= h || ny < 0 || ny >= w) continue;
		if (graph[nx][ny] == 1 && visited[nx][ny] == 0) {
			dfs(nx, ny, visited, graph);
			
		}
	}
	return true;
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	
	cin >> w >> h;
	while (w != 0 && h != 0) {
		int answer = 0;
		vector<vector<int>> graph;
		vector<vector<int>> visited;
		vector<int>arr(51);
		for (int i = 0; i < 51; i++) {
			graph.push_back(arr);
			visited.push_back(arr);
		}
		for (int i = 0; i < h; i++) {
			for (int j = 0; j < w; j++)
				cin >> graph[i][j];
		}

		for (int i = 0; i < h; i++) {
			for (int j = 0; j < w; j++) {
				if (graph[i][j] == 1) {
					if (dfs(i, j, visited, graph)) {
						answer++;
					}
				}
			}
		}
		cout << answer << endl;
		cin >> w >> h;
	}
}