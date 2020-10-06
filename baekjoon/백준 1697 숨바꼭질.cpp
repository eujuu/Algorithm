#include <iostream>
#include <vector>
#include <queue>
#include <string>
#include <algorithm>
using namespace std;

int dx[] = { 0, -1, 0, 1 };
int dy[] = { 1, 0, -1, 0 };
int visited[100001];
int map[100001];
int  m, n, ans = 0;
int cnt = 0;
//queue<pair<int, int>> q;
int bfs(int x, int y) {
	int time = 0;
	queue<int> q;
	q.push(x);
	while (1) {
		int size = q.size();
		for (int i = 0; i < size; i++) {
			int n = q.front();
			q.pop();
			if (n == y) return time;
			if (n > 0 && visited[n - 1] == 0) {
				q.push(n - 1);
				visited[n - 1] = 1;
			}
			if (n < 100000 && visited[n + 1] == 0) {
				q.push(n + 1);
				visited[n + 1] = 1;
			}
			if (n * 2 <= 100000 && n * 2 >=0 && visited[n * 2] == 0) {
				q.push(n * 2);
				visited[n * 2] = 1;
			}
		}
		time++;
	}
}
int main() {
	int f_sis, s_sis;
	cin >> f_sis >> s_sis;
	cout << bfs(f_sis, s_sis);

}