#include <iostream>
#include <vector>
#include <queue>
#include <string>
#include <algorithm>
using namespace std;
//음료수 얼려 먹기(connected components)
int dx[] = { 0, -1, 0, 1 };
int dy[] = { 1, 0, -1, 0 };
int map[5][5] = { {0, 0, 1, 1, 0}, {0, 0,1, 0, 0}, {1, 1, 1, 1, 1}, {0, 0,1, 1,0}, {0, 1, 0, 0 , 0} };
int w = 5;
int h = 5;
bool dfs(int x, int y) {
	if (x <= -1 || y <= -1 || x >= w || y >= h)
		return false;

	if (map[x][y] == 0) {
		cout << "in" << " ";
		map[x][y] = 1;
		dfs(x - 1, y);
		dfs(x, y - 1);
		dfs(x + 1, y);
		dfs(x, y + 1);
		return true;
	}
	return false;

}
int main() {
	int result = 0;
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++) {
			cout << map[i][j] << " ";
		}
		cout << endl;
	}
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++) {
			if (dfs(i, j) == true)
				result += 1;
		}
	}

	cout << result;

}