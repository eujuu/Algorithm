#include <iostream>
using namespace std;
int w, h;
int graph[501][501];
int changed[501][501];
int dp[501][501];
int dx[] = { -1, 0,1, 0 };
int dy[] = { 0, -1,0, 1 };
long long cnt = 0;
int dfs(int n, int m) {
	if (!n && !m) return 1;

	if (dp[n][m] == -1) {
		dp[n][m] = 0;
		for (int k = 0; k < 4; k++) {
			int nx = n + dx[k];
			int ny = m + dy[k];
			if (nx < 0 || ny < 0 || nx >= h || ny >= w) continue;
			if (graph[nx][ny] > graph[n][m]) {
				dp[n][m] += dfs(nx, ny);
			}
		}
	}
	return dp[n][m];
}
int main() {
	int tmp;
	//scanf("%d%d", &h, &w); 
	cin >> h >> w;

	for (int i = 0; i < h; i++) {
		for (int j = 0; j < w; j++) {
			//scanf("%d", &tmp); 
			cin >> tmp;
			graph[i][j] = tmp;
			dp[i][j] = -1;
		}
	}

	cout << dfs(h-1, w-1) << endl;

}